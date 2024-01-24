// Construct BST
//Given a sorted integer array A of size n, which contains all unique elements. You need to construct a balanced BST from this input array. Return the root of constructed BST.

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
//S.C=O(N)
BinaryTreeNode<int>* constructTreeHelper(int *input, int si,int ei){
	if(si >ei){
		return NULL;
	}

	int mid=(si+ei)/2;

	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(input[mid]);
	BinaryTreeNode<int>* left=constructTreeHelper(input,si,mid-1);
	BinaryTreeNode<int>* right=constructTreeHelper(input,mid+1,ei);

	root->left=left;
	root->right=right;
	return root;
}


BinaryTreeNode<int>* constructTree(int *input, int n) {
	return constructTreeHelper(input,0,n-1);
}

