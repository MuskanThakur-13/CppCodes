// Search In BST
//Given a BST and an integer k. Find if the integer k is present in given BST or not. You have to return true, if node with data k is present, return false otherwise.

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
    
bool searchInBST(BinaryTreeNode<int> *root , int k) {
   if(root == NULL){
	   return false;
   }
   
    if(root->data == k){
		return true;
	}
	else if(k > root->data){
		searchInBST(root->right,k);
	}
	else{
		searchInBST(root->left,k);
	}
		
}