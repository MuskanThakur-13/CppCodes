// create and Insert Duplicate Node
// For a given a Binary Tree of type integer, duplicate every node of the tree and attach it to the left of itself.
//The root will remain the same. So you just need to insert nodes in the given Binary Tree.


#include<bits/stdc++.h>
using namespace std;

template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

//T.C=O(N)
// S.C=O(H) ; H is =log(n) for balanced tree


void insertDuplicateNode(BinaryTreeNode<int> *root) {
    
    if(root == NULL){
        return;
    }

    BinaryTreeNode<int> *newNode=new BinaryTreeNode<int>(root->data);
    newNode->left=root->left;
    newNode->right=NULL;
    root->left=newNode;

    insertDuplicateNode(root->left->left);
    insertDuplicateNode(root->right);
    
}