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

//Q1.sum replacement in BT
void sumreplace(Node* root) //TC == O(n)
{
	if(root==NULL)
		return ;
	sumreplace(root->left);
	sumreplace(root->right);

	if(root->left !=NULL)
	{
		root->data +=root->left->data;
	}
	if(root->right !=NULL)
	{
		root->data +=root->right->data;
	}
}
//**************************************//
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

//P2: Balanced Height Binary Tree ==abs(left_ht -right_ht) <= 1
int height(Node* root)
{
	if(root==NULL)
		return 0;
	int lh=height(root->left);
	int rh=height(root->right);

	return max(lh,rh)+1;
}
bool balanceheight(Node* root)  //Tc ==O(n*n) 
{
	if(root==NULL)
	{
		return true;
	}
	if(balanceheight(root->left)==false)
		return false;
	if(balanceheight(root->right)==false)
		return false;
	int lh=height(root->left);
	int rh=height(root->right);

	if(abs(lh-rh)<=1)
		return true;
	else
		return false;

}
//method 2  :TC==O(n)
bool isbalanced(Node* root,int* height)
{
	if(root==NULL)
	{
		return true;
	}
	int lh=0,rh=0;
	if(isbalanced(root->left,&lh)==false)
		return false;
	if(isbalanced(root->right,&rh)==false)
		return false;
	
	*height=max(rh,lh)+1;

	if(abs(lh-rh)<=1)
		return true;
	else
		return false;
}

void RightviewofBT(Node* root)
{
	if(root==NULL)
		return ;
   queue<Node*> q;
   q.push(root);

   while(!q.empty())
   {
   	int n=q.size();
   	for(int i=0;i<n;i++)
   	{
   		Node* curr=q.front();
   		q.pop();

   		if(i==n-1)
   		{
   			cout<< curr->data<<" ";
   		}
   		if(curr->left !=NULL)
   		{
   			q.push(curr->left);
   		}
   		if(curr->right !=NULL)
   		{
   			q.push(curr->right);
   		}

   	}
   }
}


//left view of Binary Tree
void leftViewBT(Node* root)
{
	if(root==NULL)
		return ;
   queue<Node*> q;
   q.push(root);

   while(!q.empty())
   {
   	int n=q.size();
   	for(int i=1;i<=n;i++)
   	{
   		Node* curr=q.front();
   		q.pop();

   		if(i==1)
   		{
   			cout<< curr->data<<" ";
   		}
   		if(curr->left !=NULL)
   		{
   			q.push(curr->left);
   		}
   		if(curr->right !=NULL)
   		{
   			q.push(curr->right);
   		}

   	}
   }
}

int distbwtwonodes(Node* root)
{

}
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
    // printPreorder(root);
    // sumreplace(root);
    // cout<<"\n";
    // printPreorder(root);
   //  int height=0;
   // isbalanced(root,&height)?cout<<"Balanced":cout<<"Not Balanced";
	//leftViewBT(root);
	distbwtwonodes()
	return 0;
}
// 3. 7. 9. 12. 16. 18. 20.  