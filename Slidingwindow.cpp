#include<bits/stdc++.h>
using namespace std;
//P1: max sum subarray with size k& sum < k   T/C:O(n)
void maxsubarray(int arr[],int n,int k,int x)
{
	int sum=0,ans=0;
for(int i=0;i<k;i++)
{
	sum +=arr[i];
}
if(sum<x)
{
	ans=sum;
}
for(int i=k;i<n;i++)
{
	sum=sum-arr[i-k];
	sum=sum+arr[i];
	if(sum< x)
	{
		ans=max(ans,sum);
	}
}
cout<< ans<<" is the max subarray sum( < x )";
}

//P2:min subarray size with sum > x   T/c=O(n)
 void minsubarray(int arr[],int n,int x)
 {
   int sum=0,end=0,start=0,minlen=n+1;
   while(end<n)
   {
   	while(sum<=x && end<n)
   	{
   	sum +=arr[end++];
    }
    while(sum>x && start<n)
    {
    	if(end- start<minlen)
    	{
    		minlen=end-start;
    	}
    	sum -=arr[start++];
    }
   }
   if(minlen==n+1)
   	cout<< "No such subarray exists";
   else
   cout<< minlen<<" ";
 }
//P3:form number divisible by 3





//P4:subarray with palindromic catenation




//P5: Perfect Numbers in subarrays





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
	cin>> k>> x;
	minsubarray(arr,n,x);
	return 0;
}

