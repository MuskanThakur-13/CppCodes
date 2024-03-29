// BST CLASS
// Implement the BST class which includes following functions -

// 1. insert -
// Given an element, insert that element in the BST at the correct position. If element is equal to the data of the node, insert it in the left subtree.

// 2. search
// Given an element, find if that is present in BST or not. Return true or false.

// 3. delete -
// Given an element, remove that element from the BST. If the element which is to be deleted has both children, replace that with the minimum element from right sub-tree.

// 4. printTree (recursive) -
// Print the BST in in the following format -

// For printing a node with data N, you need to follow the exact format -

// N:L:x,R:y
// where, N is data of any node present in the binary tree. x and y are the values of left and right child of node N. Print the children only if it is not null.

// There is no space in between.

// You need to print all nodes in the recursive format in different lines

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
class BST {
    // Define the data members
    BinaryTreeNode<int> *root;
   public:
     //  Constructor
    BST() { 
        root= NULL;
    }
      //  Destructor
    ~BST() { 
        delete root;
    }

	/*----------------- Public Functions of BST -----------------*/
    private:
    BinaryTreeNode<int> *remove(int data,BinaryTreeNode<int> *node){
        if(node == NULL){
            return NULL;
        }

        if(data > node->data){
            node->right=remove(data,node->right);
            return node;
        }
        else  if(data < node->data){
            node->left=remove(data,node->left);
            return node;
        }
        else{
            if(node->left == NULL && node->right == NULL){
                delete node;
                return NULL;
            }
            else if(node->left == NULL){
                BinaryTreeNode<int> *temp=node->right;
                node->right=NULL;
                delete node;
                return temp;
            }
            else if(node->right == NULL){
                BinaryTreeNode<int> *temp=node->left;
                node->left=NULL;
                delete node;
                return temp;
            }
            else{
                BinaryTreeNode<int> *minNode=node->right;
                while(minNode->left != NULL){
                    minNode=minNode->left;
                }
                int rightMin=minNode->data;
                node->data=rightMin;
                node->right=remove(rightMin,node->right);
                return node;
            }
        }
    }

    void print(BinaryTreeNode<int> *root){
        if(root == NULL){
            return;
        }
        cout<<root->data<<":";
        if(root->left != NULL){
            cout<<"L:"<<root->left->data<<",";
        }
        if(root->right != NULL){
            cout<<"R:"<<root->right->data;
        }
        cout<<endl;
        print(root->left);
        print(root->right);

    }

    BinaryTreeNode<int>* insert(int data,BinaryTreeNode<int> * node){
        if(node == NULL){
            BinaryTreeNode<int>* newNode=new BinaryTreeNode<int>(data);
            return newNode;
        }
        if(data <= node->data){
            node->left=insert(data,node->left);
        }
        else{
            node->right=insert(data,node->right);
        }
        return node;
    }

    bool search(int data,BinaryTreeNode<int> *node){
        if(node == NULL){
            return false;
        }

        if(node->data == data){
            return true;
        }
        else if(data < node->data){
            return search(data,node->left);
        }
        else {
            return search(data,node->right);
        }
    }

    public:
    void remove(int data) { 
       this-> root=remove(data,root);  // name of the function in private and public should be same
    }
    void print() { 
        print(root);
    }
    void insert(int data) { 
        this->root=insert(data,this->root);
    }
    bool search(int data) {
        return search(data,root);
    }
};