// C++ program to check whether a given binary tree is Full tree or not
#include <bits/stdc++.h> 
using namespace std; 
struct Node 
{ 
	int data; 
	struct Node *left;
	struct Node *right; 
};

Node *new_node(int value) 
{ 
	//creating a new node
	Node *newnode = new Node(); 
	//storing value in data field of the node
	newnode->data = value; 
	//assigning null value to left and right fields of node
	newnode->right = NULL;
	newnode->left = NULL; 
	//returning the address of newly created node
	return newnode; 
} 

bool isFull(Node* root) 
{ 
       //initializing result to false
        bool result = false; 
       //check if tree is empty
        if(root==NULL) return true; 
       //creating an empty queue using STL and pushing the root in it
        queue<Node*>Q;
        Q.push(root);
       //implementing Breadth-first search (BFS) using queue. 
        while(!Q.empty()) 
        { 
             Node *temp = Q.front(); //getting the first node in queue
             Q.pop(); //unwanted node in queue is removed
           //check if it is a leaf node (left and right field is NULL)
             if (temp->left==NULL && temp->right==NULL) continue;
           //check if not both but one is NUll
             else if (temp->left==NULL || temp->right==NULL) return false; 
  
         //otherwise push left and right children of temp in the queue
             Q.push(temp->left); 
             Q.push(temp->right); 
         } 
      //if queue is empty
      return true; 
}
int main() 
{ 
	Node *root = new_node(22); 
	root->left = new_node(19); 
	root->right = new_node(25); 
	root->left->left = new_node(17);
	root->left->right = new_node(18);
	if(isFull(root)) cout<<"Full Binary Tree"; 
	else cout<<"Not a Full Binary Tree"; 

	return 0;  
} 