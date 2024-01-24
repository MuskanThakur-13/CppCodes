// Find path in BST
// Given a BST and an integer k. Find and return the path from the node with data k and root (if a node with data k is present in given BST) in a list. Return empty list otherwise.
// Note: Assume that BST contains all unique elements.

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

//T.C=O(H)
//S.C=O(H)

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	if(root == NULL){
		return NULL;
	}

	if(root->data == data){
		vector<int> * output=new vector<int>();
		output->push_back(root->data);
		return output;
	}

	vector<int> * leftOut=getPath(root->left,data);
	if(leftOut != NULL){
		leftOut->push_back(root->data);
		return leftOut;
	}

	vector<int> * rightOut=getPath(root->right,data);
	if(rightOut != NULL){
		rightOut->push_back(root->data);
		return rightOut;
	}
	else{
		return NULL;
	}
}