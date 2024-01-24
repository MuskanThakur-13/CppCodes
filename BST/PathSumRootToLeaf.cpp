// path sum root to leaf
//For a given Binary Tree of type integer and a number K, print out all root-to-leaf paths where the sum of all the node data along the path is equal to K.

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

void rootToLeafPathsSum(BinaryTreeNode<int> *root, int k, string path){
    if(root == NULL){
        return;
    }   
    if(root->left == NULL && root->right == NULL && k==root->data){
        path += to_string(root->data);
        cout << path << endl;
        return;
    }
    rootToLeafPathsSum(root->left, k-root->data, path+to_string(root->data)+" ");
    rootToLeafPathsSum(root->right, k-root->data, path+to_string(root->data)+" ");
}


void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    rootToLeafPathsSum(root, k, "");
}