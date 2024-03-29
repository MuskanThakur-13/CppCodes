// print elements in range
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
//S.C=O(H)
#include<bits/stdc++.h>
using namespace std;
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
	if(root ==  NULL){
		return;
	}

	 if ( k1 < root->data ){
    	elementsInRangeK1K2(root->left, k1, k2);
    }
   	if ( k1 <= root->data && k2 >= root->data ){
      	cout<<root->data<<" ";
    }
   	if ( k2 > root->data ){
      	elementsInRangeK1K2(root->right, k1, k2);
    }
}