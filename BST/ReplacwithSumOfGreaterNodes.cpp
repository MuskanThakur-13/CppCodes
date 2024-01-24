// Replace with sum of greater nodes
// Given a binary search tree, you have to replace each node's data with the sum of all nodes which are greater or equal than it. You need to include the current node's data also.

// That is, if in given BST there is a node with data 5, you need to replace it with sum of its data (i.e. 5) and all nodes whose data is greater than or equal to 5.

// Note: You don't need to return or print, just change the data of each node

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
    
int replace(BinaryTreeNode<int>* root, int sum){
    if(root == NULL){
        return sum;
    }
    sum = replace(root->right, sum);
    sum += root->data;
    root->data=sum;
    sum = replace(root->left, sum);
    return sum;
}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    replace(root,0);
}