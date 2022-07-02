#include<bits/stdc++.h>
using namespace std;
 struct Node{
 	int data;
 	Node* left;
 	Node* right;
 	Node(int key)
 	{
 		data=key;
 		left=NULL;
 		right=NULL;
 	}
 };
 //Questions 
//1..:check for Bst   T/c=O(n = no of node)
bool checkBst(Node* root,Node* min=NULL,Node* max=NULL)
{
	if(root==NULL)
	{
		return true;
	}
  if(min !=NULL && root->data<=min->data)
  {
  	return false;
  }
  if(max !=NULL && root->data>=max->data)
  {
  	return false;
  }

 bool leftvalid=checkBst(root->left,min,root);
 bool rightvalid=checkBst(root->right,root,max);


return leftvalid and rightvalid;
}



int main()
{
    Node* root=new Node(5);
    root->left= new Node(2);
    root->right= new Node(8);

    if(checkBst(root,NULL,NULL))
    	cout<< "valid Bst\n";
    else
    	cout<< "Not valid";


    return 0;
}