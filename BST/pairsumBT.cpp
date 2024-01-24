//Pair Sum Binary Tree
// Given a binary tree and an integer S, print all the pair of nodes whose sum equals S.

// Note:

// 1. Assume the given binary tree contains all unique elements.
// 2. In a pair, print the smaller element first. Order of different pairs doesn't matter.



#include <bits/stdc++.h>
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

// T.C=O(N)
//  S.C=O(N)

void convertToArray(BinaryTreeNode<int> *root, vector<int> &output){
	if(root == NULL){
		return;
	}

	output.push_back(root->data);
	convertToArray(root->left,output);
	convertToArray(root->right,output);
}

// MAIN FUNCTION
void pairSum(BinaryTreeNode<int> *root, int sum) {
	vector<int> output;
	convertToArray(root,output);

	sort(output.begin(),output.end());

	int i=0;
	int j=output.size()-1;

	while(i<j){
		if(output[i]+output[j] == sum){
			cout<<output[i]<<" "<<output[j]<<"\n";
			i++;
			j--;
		}
		else if(output[i]+output[j] > sum){
			j--;
		}
		else{
			i++;
		}
	}
	
}