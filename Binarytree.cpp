
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

  void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;

    // first recur on left subtree
    printPostorder(node->left);

    // then recur on right subtree
    printPostorder(node->right);

    // now deal with the node
    cout << node->data << " ";
}

// Function to print the Inorder traversal
// of a Binary Tree
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;

    /* first recur on left child */
    printInorder(node->left);

    /* then print the data of node */
    cout << node->data << " ";

    /* now recur on right child */
    printInorder(node->right);
}

// Function to print the PreOrder traversal 
// of a Binary Tree
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;

    /* first print data of node */
    cout << node->data << " ";

    /* then recur on left sutree */
    printPreorder(node->left); 

    /* now recur on right subtree */
    printPreorder(node->right);
} 
//Level order
void printlevelorder(Node* root)
{
	if(root==NULL)
	{
		return ;
	}
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		Node* node=q.front();
		q.pop();
		if(node !=NULL)
		{
			cout<< node->data<<" ";
			if(node->left)
				q.push(node->left);
			if(node->right)
				q.push(node->right);
		}
		else if(!q.empty())
		{
			q.push(NULL);
		}
	}
}
//Q1 sum of nodes at kth level

int sumatk(Node* root,int k)
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
			if(level ==k)
			{
				sum += node->data;
			}
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
cout << "Preorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root); 

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

     cout << "\nlevelorder traversal of binary tree is \n";
    printlevelorder(root);

cout<< "\nsum at level k--> "<<sumatk(root,3)<<"\n";
    return 0;
}   





