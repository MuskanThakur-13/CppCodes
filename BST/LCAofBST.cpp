// LCA of Binary search tree
// Given a binary search tree and data of two nodes, find 'LCA' (Lowest Common Ancestor) of the given two nodes in the BST.

// LCA
// LCA of two nodes A and B is the lowest or deepest node which has both A and B as its descendants. 
// Example:
// In this example, the green coloured node is the LCA to A and B.
#include<bits/stdc++.h>
using namespace std;

template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

// T.C=O(H)
// S.C=O(H)

int getLCA(BinaryTreeNode<int>* root , int val1 , int val2){
   
    if(root == NULL){
		return -1;
	}

	if(root->data == val1 || root->data == val2){
		return root->data;
	}

	int lca;
    if(val1 < root->data && val2 < root->data){
        lca = getLCA(root->left, val1, val2);
    } 
	else if(val1 >= root->data && val2 >= root->data){
        lca = getLCA(root->right, val1, val2);
    } 
	else{
        lca = root->data;
    }
    

}

