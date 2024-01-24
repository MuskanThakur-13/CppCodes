// LCA of a Binary Tree
// Given a binary tree and data of two nodes, find 'LCA' (Lowest Common Ancestor) of the given two nodes in the binary tree.

// LCA
// LCA of two nodes A and B is the lowest or deepest node which has both A and B as its descendants. 

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

//T.C=O(N)
// S.C=O(N)

int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    if(root == NULL){
		return -1;
	}

	if(root->data == a || root->data == b){
		return root->data;
	}

	int left=getLCA(root->left,a,b);
	int right=getLCA(root->right,a,b);

	if(left == -1 && right == -1){
		return -1;
	}
	else if(left == -1){
		return right;
	}
	else if(left != -1 && right == -1){
		return left;
	}
	else if(right != -1 && left != -1){
		return root->data;
	}
}
