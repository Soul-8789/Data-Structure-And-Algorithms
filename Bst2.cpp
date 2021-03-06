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

//to make balanced BST


Node* sortedArraytoBst(int arr[],int start,int end)
{
	if(start > end)
	{
		return NULL;
	}
	int mid=start+(end-start)/2;

	Node* root=new Node(arr[mid]);

	root->left=sortedArraytoBst(arr,start,mid-1);
	root->right=sortedArraytoBst(arr,mid+1,end);

	return root;
}
 void preorder(Node* root)
 {
 	if(root== NULL)
 		{
 			return ;
 		}
 	  cout<< root->data<<" ";	
      preorder(root->left);
      preorder(root->right);

 }

int main()
{
	int arr[]={10,20,30,40,50};
    Node* root=sortedArraytoBst(arr,0,4);
   preorder(root);

	return 0;

}