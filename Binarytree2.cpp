
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* left,*right;
	Node(int data){
		this->data=data;
		left=right=NULL;

	}
};

//P1::sum of all nodes
int sumofallnode(Node* root,int k)
{
	if(root==NULL)
	{
		return -1;
	}
    queue<Node*> q;
	q.push(root);
	q.push(NULL);
	int level=0;
	int sum=0;
	while(!q.empty())
	{
		Node* node=q.front();
		q.pop();
		if(node !=NULL)
		{
				sum += node->data;
			
			if(node->left)
				q.push(node->left);
			if(node->right)
				q.push(node->right);
		}
		else if(!q.empty())
		{
			q.push(NULL);
			level++;
		}
	}
 return sum;
}
//method ::2
int countnodes(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return countnodes(root->left)+countnodes(root->right)+1;
}
//sum of count of node
int countofnode(Node* root,int k)
{
	if(root==NULL)
	{
		return -1;
	}
    queue<Node*> q;
	q.push(root);
	q.push(NULL);
	int level=0;
	int count=0;
	while(!q.empty())
	{
		Node* node=q.front();
		q.pop();
		if(node !=NULL)
		{
				count++;
			
			if(node->left)
				q.push(node->left);
			if(node->right)
				q.push(node->right);
		}
		else if(!q.empty())
		{
			q.push(NULL);
			level++;
		}
	}
 return count;
}
//method 2::
int sumnodes(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return sumnodes(root->left)+sumnodes(root->right)+root->data;
}

//Heightof the binary tree// TC=O(n)
int heightofBT(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return max(heightofBT(root->left),heightofBT(root->right))+1;
}
//method 1:Diameter of tree//TC==O(n*n)
int  diameteroftree(Node* root)
{
	if(root==NULL)
		return 0;
    
    int rheight=heightofBT(root->right);
    int lheight=heightofBT(root->left);
    int currdiameter=lheight+rheight+1;

    int rdiameter=diameteroftree(root->right);
    int ldiameter=diameteroftree(root->left);

    return max(currdiameter,max(rdiameter,ldiameter));
}
//method 2::O(n)
int diametertree(Node* root,int* height)
{
	if(root==NULL)
	{
		*height=0;
		return 0;
	}
	int lh=0,rh=0;
	int ldiameter=diametertree(root->left,&lh);
	int rdiameter=diametertree(root->right,&rh);
    
    int currdiameter=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(currdiameter,max(ldiameter,rdiameter));

}
// Driver Code
int main()
{
    // Contrust the Tree
    //      1
    //     /  \
    //    2    3
    //   / \   / \ 
    //  4   5  6  7
    
    struct Node *root = new Node(1);
    root->left    = new Node(2);
    root->right    = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5); 
    root->right->left = new Node(6);
    root->right->right = new Node(7);

int height=0;
cout<< "\nsum at level k--> "<<countnodes(root)<<"\n";
cout<< "\nsum at level k--> "<<sumnodes(root)<<"\n";
cout<< "\nsum at level k--> "<<heightofBT(root)<<"\n";
cout<< "\nsum at level k--> "<<diametertree(root,&height)<<"\n";



    return 0;
}   





