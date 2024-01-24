// largest BST
// Given a Binary tree, find the largest BST subtree. That is, you need to find the BST with maximum height in the given binary tree. You have to return the height of largest BST.

// Note :
// The binary tree will be consisting of only unique elements.

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
	
#include<climits>
class largBstHeight{
	public:
	int minimum;
	int maximum;
	bool isBST;
	int maxheight;
};

largBstHeight  largestBSTSubtreeHelper(BinaryTreeNode<int> *root){
	if(root == NULL){
		largBstHeight res;
		res.minimum=INT_MAX;
		res.maximum=INT_MIN;
		res.isBST=true;
		res.maxheight=0;
		return res;
	}

	largBstHeight left=largestBSTSubtreeHelper(root->left);
	largBstHeight right=largestBSTSubtreeHelper(root->right);

	largBstHeight res;
	res.minimum=min(root->data,min(left.minimum,right.minimum));
	res.maximum=max(root->data,max(left.maximum,right.maximum));

	res.isBST=left.isBST && right.isBST && root->data >left.maximum && root->data <= right.minimum ;

	if(res.isBST){
		res.maxheight=max(left.maxheight,right.maxheight)+1;
	}
	else{
		res.maxheight=max(left.maxheight,right.maxheight);
	}
	return res;
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    largBstHeight res=largestBSTSubtreeHelper(root);
	return res.maxheight;
}