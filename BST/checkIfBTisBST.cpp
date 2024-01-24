// check if binary tree is BST
// Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree). If yes, return true, return false otherwise.
// Note:
// Duplicate elements should be kept in the right subtree.

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



//T.C=O(N*H);i.e. O(nlogn) if tree balanced , O(n^2) if tree height is O(n)
//S.C=O(N)
#include<climits>
// int maxValue(BinaryTreeNode<int> * root){
// 	if(root == NULL){
// 		return INT_MIN;
// 	}
	
// 	return max(root->data,max(maxValue(root->left),maxValue(root->right)));
// }

// int minValue(BinaryTreeNode<int> * root){
// 	if(root == NULL){
// 		return INT_MAX;
// 	}
	
// 	return min(root->data,min(minValue(root->left),minValue(root->right)));
// }

// bool isBST(BinaryTreeNode<int> *root) {
// 	if(root == NULL){
// 		return true;
// 	}

// 	int leftMax = maxValue(root->left);
//     int rightMin = minValue(root->right);

// 	return (root->data > leftMax) && (root->data < rightMin) && isBST(root->left) && isBST(root->right);
    
// }

//OPtimized Approach 
//T.C=O(N)
//S.C=O(H)


bool solve(BinaryTreeNode<int> * root,int mn,int mx){
	if(root == NULL){
		return true;
	}
	if(root->data < mn || root->data > mx){
		return false;
	} 
	return (solve(root->left,mn,root->data-1) && solve(root->right,root->data+1,mx));
}

bool isBST(BinaryTreeNode<int> * root){
	return solve(root,INT_MIN,INT_MAX);
}