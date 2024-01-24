// print nodes at distance k from node
// You are given a Binary Tree of type integer, a integer value of target node's data, and an integer value K.

// Print the data of all nodes that have a distance K from the target node. The order in which they would be printed will not matter.

#include<bits/stdc++.h>
using namespace std;

template <typename T>
        class BinaryTreeNode {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
        };


void printAtLevelK(BinaryTreeNode<int>* root,int k){
    if(root == NULL){
        return;
    }
    if(k == 0){
        cout << root->data << endl;
        return;
    }
    printAtLevelK(root->left, k-1);
    printAtLevelK(root->right, k-1);
}

int nodesAtDistK(BinaryTreeNode<int> *root, int node, int k){
    if(root == NULL){
        return -1;
    }

    if(root->data == node){
        printAtLevelK(root, k);
        return 0;
    }
    
    int left = nodesAtDistK(root->left, node, k);
    if(left != -1){
        if(left+1 == k){
            cout << root->data << endl;
        } 
        else {
            printAtLevelK(root->right, k-left-2);
        }
        return left+1;
    }
     
    int right = nodesAtDistK(root->right, node, k);
    if(right != -1){
        if(right+1 == k){
            cout << root->data << endl;
        } else{
            printAtLevelK(root->left, k-right-2);
        }
        return 1+right;
    }
    return -1;
}


void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    nodesAtDistK(root, node, k);
}