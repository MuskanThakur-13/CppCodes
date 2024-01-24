// pair sum in a BST

// Given a binary search tree and an integer S, find pair of nodes in the BST which sum to S. You can use extra space of the order of O(log n).

// Note:
// 1. Assume BST contains all unique elements.
// 2. In a pair, print the smaller element first.

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
#include <algorithm>
#include <vector>
//T.C=O(N)
//S.C=O(N)
void convertToArray(BinaryTreeNode<int> *root, vector<int> &output){
	if(root == NULL){
		return;
	}

	convertToArray(root->left,output);
	output.push_back(root->data);
	convertToArray(root->right,output);
}
// MAIN FUNCTION
void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    // Write your code here
	vector<int> output;
	convertToArray(root,output);


	int i=0;
	int j=output.size()-1;

	while(i<j){
		if(output[i]+output[j] == s){
			cout<<output[i]<<" "<<output[j]<<"\n";
			i++;
			j--;
		}
		else if(output[i]+output[j] > s){
			j--;
		}
		else{
			i++;
		}
	}
}

//Approach 2 : time O(n) , space O(h)
