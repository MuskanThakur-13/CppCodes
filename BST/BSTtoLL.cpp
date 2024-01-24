// BST to LL

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

	template <typename T>
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};

/*  ****************UNoptimized code**********************
//T.C=O(N^2)
//S.C=O(H)
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	if(root == NULL){
        return NULL;
    }
	
    Node<int> *left=constructLinkedList(root->left);
    Node<int> *right=constructLinkedList(root->right);

    Node<int> * curr=new Node<int>(root->data);

    curr->next=right;

    Node<int> *temp=left;
	
	if(temp != NULL){

		while(temp->next != NULL){
        temp=temp->next;
       }
	temp->next=curr;
	}
	else{
		left=curr;
	}

    return left;

}
*/
//OPTIMIZED CODE
//T.C=O(N)
//S.C=O(H)
//This pair class is not inbuilt we have made it,inbuilt pair class starts with small p and here we have a data type of node so we made it

class Pair{
  	public:
    	Node<int>* head;
    	Node<int>* tail;
    	
    	Pair(){
            this->head = NULL;
            this->tail = NULL;
        }
};
Pair constructLL(BinaryTreeNode<int>* root){
    if(root == NULL){
        Pair ans;
        ans.head = NULL;
        ans.tail = NULL;
        return ans;
    }
    if(root->left == NULL && root->right == NULL){
        Node<int>* node = new Node<int>(root->data);
        Pair ans;
        ans.head = node;
        ans.tail = node;
        return ans;
    }

    Pair left = constructLL(root->left);
    Pair right = constructLL(root->right);

    Node<int>* node = new Node<int>(root->data);

    Pair ans;
    if(left.tail == NULL){
        ans.head = node;
    }
	else {
        left.tail->next = node;
        ans.head = left.head;
    }
    node->next = right.head;

    if(right.head == NULL){
        ans.tail = node;
    }
	else{
        ans.tail = right.tail;
    }
    return ans;
}
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	Pair ans = constructLL(root);
    return ans.head;   
}


























