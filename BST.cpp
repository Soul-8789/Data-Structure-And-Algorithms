#include<bits/stdc++.h>
using namespace std;

//No duplicates allowed
struct Node{
	int data;
	 Node *left;
	 Node *right;

	Node(int key)
	{
		data=key;
		left=right=NULL;
	}
};

//How to build array to Bst
Node* insertBst(Node* root,int val)
{
	if(root==NULL)
	{
		return new Node(val);
	}
	if(val<root->data)
	{
		root->left=insertBst(root->left,val);
	}
	else
	{
		root->right=insertBst(root->right,val);

	}
	return root;
}

void preorder(Node *root)
 {
 	if(root==NULL){
 		return;
 	}
 	cout<< root->data<<" ";
 	preorder(root->left);
 	preorder(root->right);
}


 void inorder(Node *root)
 {
 	if(root==NULL){
 		return;
 	}
 	inorder(root->left);
 	cout<< root->data<<" ";
 	inorder(root->right);
 }

void postorder(Node *root)
 {
 	if(root==NULL){
 		return;
 	}
 	
 	postorder(root->left);
 	postorder(root->right);
 	cout<< root->data<<" ";
}

//Search in BST  T/C :O(logn)
Node* searchinBST(Node* root,int key)
{
	if(root==NULL)
	{
		return NULL;
	}
   if(key==root->data)
   {	
   	return root;
   }
   if(root->data >key)
   {
   	return searchinBST(root->left,key);
   }
   
   return searchinBST(root->right,key);
   
}

Node* inorderSucc(Node* root)
{
 Node* curr=root;
 while(curr && curr->left != NULL)
 {
 	curr=curr->left;
 }
return curr;

}

Node* DeleteinBST(Node* root,int key)
{
    if(root->data > key)
    {
    	root->left=DeleteinBST(root->left,key);
    }
    else if(root->data < key)
    {
    	root->right=DeleteinBST(root->right,key);
    }
    else
   {
	//case 1 : Node is a leaf
	//case 2: node have one child:replace with child and delete a node

     if(root->left==NULL)
     {
     	Node* temp=root->right;
     	free(root);
     	return temp;
     }

   else if(root->right==NULL)
     {
     	Node* temp=root->left;
     	free(root);
     	return temp;
     }

	//Case 3:Node Have two child: 
	//1.find the inorder successor.
    //2.Relace node with inorder successor
    //3.delete the node
    Node* temp =inorderSucc(root->right);
    root->data=temp->data;
    root->right=DeleteinBST(root->right,temp->data);
    }
  return root;

}
//Questions 
//1..:check for Bst
bool checkBst(Node* root)
{
  




}
 int main()
 {
 	// Node  *root=NULL;
 	// root=insertBst(root,5);
 	// insertBst(root,1);
 	// insertBst(root,3);
 	// insertBst(root,4);
 	// insertBst(root,6);
 	// insertBst(root,8);
 	// insertBst(root,9);
 	// preorder(root);
 	// cout<< endl;
 	// inorder(root);
 	// cout<<endl;
 	// postorder(root);
 	// if(searchinBST(root,6)== NULL)
 	// 	cout<< "key doesnot exits";
 	// else
 	// 	cout<<"Key Exist";
 	// cout<<endl;
 	// inorder(root);
    // cout<<endl;
    // root=DeleteinBST(root,4);
    //inorder(root);
  




return 0; 
 }