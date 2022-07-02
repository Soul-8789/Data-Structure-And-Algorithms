#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
	
};
Node* newNode(int key)
	{ 
		Node* node=new Node;
		node->data=key;
		node->left=node->right=NULL;
		return node;
	}

 /*
 In hashing :
         maps:                unordered map
 1.insertion:o(log(n))         O(1)
 2.Acessing:O(log(n))          O(1)
3. Deletion: O(1)              O(n)
 4.imple:  red black tree      hash table
 */

//Frequency of elements

void solve1()
{
	int  n;
  cin>> n;
  vector<int> a(n);
  for(int i=0;i<n;i++)
  {
  	cin>> a[i];
  }
  unordered_map<int,int> mp;
  for(int i=0;i<n;i++)
  {
  	mp[a[i]]++;
  }
  for(auto x:mp)
  {
  	cout<< x.first<<" "<<x.second<<"\n";
  }
	
}
// print Vertical order of binary tree
void verticalorder(Node* root,int hordis,map<int,vector<int> > &m)
{
 if(root==NULL)
 	return;
 m[hordis].push_back(root->data);
 verticalorder(root->left,hordis-1,m);
 verticalorder(root->right,hordis+1,m);
}
void solve2(){
  Node* root=newNode(10);
  root->left=newNode(7);
  root->right=newNode(4);
  root->left->left=newNode(3);
  root->left->right=newNode(11);
  root->right->left=newNode(14);
  root->right->left=newNode(6);

   map<int,vector<int> >mp;
   int hordis=0;
   verticalorder(root,hordis,mp);
  
 for(auto it=mp.begin();it!=mp.end();it++)
{
 for(int i=0;i<(it->second).size();i++)
 {
cout<<(it->second)[i]<<" ";
 }
 cout<<endl;
}
}

//count the subarray with sum zero
void solve3()
{
	int  n;
  cin>> n;
  vector<int> a(n);
  for(int i=0;i<n;i++)
  {
  	cin>> a[i];
  }
  map<int,int> cnt;
  int presum=0;
  for(int i=0;i<n;i++)
  {
  	presum +=a[i];
    cnt[presum]++;
  }
  int ans=0;
 for(auto it=cnt.begin();it!=cnt.end();it++)
 {
 	int c=it->second;
 	 ans +=(c*(c-1)/2);
 	 if(it->first ==0)
 	 {
 	 	ans += it->second;
 	 }
 }
  cout<< ans<<"\n";
}

//sliding window
void solve4()
{
   int  n,k;
  cin>> n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++)
  {
  	cin>> a[i];
  }
  int s=0,ans=INT_MAX;
  for(int i=0;i<k;i++)
  {
  	s +=a[i];
  }
  ans=min(ans,s);
  for(int i=1;i<n-k+1;i++)
  {
  	s -=a[i-1];
  	s +=a[i+k-1];
  	ans =min(ans,s);
  }
   cout<< ans<<"\n";
}

int main()
{
	//unordered_map<int,int> up; //(key,value)
   //map<int,int>mp;
   solve4();  
  return 0;

}