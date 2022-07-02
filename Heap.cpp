#include<bits/stdc++.h>
using namespace std;
// typedef pair<int,pair<int,int> > ppi;
typedef pair<int,int> pi;
// Heap :
// Max Heap :k+ smallest
// Min Heap :k + largest

// some functions
//push()
//pop()
//top()
//empty()

//Kth smallest Element
 
 void solve1(int arr[],int n,int k){
 	priority_queue<int> maxhp;
 	for(int i=0;i<n;i++)
 	{
 		maxhp.push(arr[i]);
 		if(maxhp.size()>k)
 			{
 				maxhp.pop();
 			}
 	}
 	cout<< maxhp.top();
 }

 //kth largest element 

 void solve2(int arr[],int n,int k){
 	priority_queue<int, vector<int> , greater<int> > minhp;
 	for(int i=0;i<n;i++)
 	{
 		minhp.push(arr[i]);
 		if(minhp.size()>k)
 			{
 				minhp.pop();
 			}
 	}
 	// for(int i=0;i<k;i++)
 	// 	{
 	// 		cout<< minhp.top()<<" ";
 	// 		minhp.pop();
 	// 	}
 	while(minhp.size ()>0)
 	{
 		cout<< minhp.top()<<" ";
 		minhp.pop();
 	}
 }

//Sort a kth sorted Array

void solve3(int arr[],int n,int k)
{
 	priority_queue<int,vector<int>,greater<int> > minhp;
    // vector<int> v(n);
    for(int i=0;i<n;i++)
 	{
 		minhp.push(arr[i]);
 		if(minhp.size()>k)
 			{
 				cout<< minhp.top()<<" ";
 				minhp.pop();
 			}
 	}
 	while(minhp.size ()>0)
 	{
 		cout<< minhp.top()<<" ";
 		minhp.pop();
 	 }
}
//kth closet Number

void solve4(int arr[],int n,int k,int x)
{	
  priority_queue<pi> maxhp;
  for(int i=0;i<n;i++)
 	{
 		maxhp.push({abs(arr[i]-x),arr[i]});
 		if(maxhp.size()>k)
 			{
 				maxhp.pop();
 			}
 	}
 	
 	while(maxhp.size ()>0)
 	{
 		cout<< maxhp.top().second<<" ";
 		maxhp.pop();
 	}
}

//Top k frequent element
void solve5(int arr[],int n,int k)
{
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}

priority_queue<pi,vector<pi>,greater<pi> > minhp;

	for(auto it=mp.begin();it !=mp.end();it++)
	{
         	minhp.push({it->second,it->first});
 		if(minhp.size()>k)
 			{
 				minhp.pop();
 			}
	}
 	while(minhp.size ()>0)
 	{
 		cout<< minhp.top().second<<" ";
 		minhp.pop();
 	}
}

// Frequency Sort

void solve6(int arr[],int n)
{
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)  
	{
		mp[arr[i]]++;
	}
priority_queue<pi > maxhp;

	for(auto it=mp.begin();it !=mp.end();it++)
	{
         	maxhp.push({it->second,it->first});	
	}
 	while(maxhp.size() > 0)
 	{
 		int fre=maxhp.top().first;
 		int ele=maxhp.top().second;
 		for(int i=1;i<=fre;i++)
 		{
 			cout<< ele<<" ";
 		}
 		maxhp.pop();
 	}
}



int main()
{
	int n;
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{ 
		cin>> arr[i];
	}
	int k,x;
	cin >> k >> x;
	//solve1(arr,n,k);
	//solve2(arr,n,k);
	//solve3(arr,n,k);
	//solve4(arr,n,k,x);
	//solve5(arr,n,k);
    solve6(arr,n);
    return 0;
}