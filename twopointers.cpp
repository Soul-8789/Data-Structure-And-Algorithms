#include<bits/stdc++.h>
using namespace std;

//P1....Three sum T/C:: O(n)
bool three_sum(int arr[],int n,int x){
	bool found =false;
  for(int i=0;i<n;i++)
  {
  	int low=i+1,high=n-1;
  	while(low<high)
  	{
  		int curr=arr[i]+arr[low]+arr[high];
  		if(curr==x)
  		{
  			found=true;
  		}
  		if(curr> x)
  		{
  			high--;
  		}
  		else{
  			low++;
  		}
  	}
  }
  return found;
}

//P2:: maximum consequetive ones:
0-=   q \[]


//P3:: longest substring without repeating characters




int main()
{
int n;
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>> arr[i];
	}
	int x;
	cin>> x;
	sort(arr,arr+n);
	cout<< bool(three_sum(arr,n,x));
  return 0;
}