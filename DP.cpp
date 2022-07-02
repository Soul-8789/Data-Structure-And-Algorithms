#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
int dp[N];
int h[N];
int k;
//TOP _DOWN
int fib(int n)// memoization T/c=O(n)
{
	if(n==0 || n==1)
		return n;
    if(dp[n] != -1) //memoise
    	return dp[n];
    return dp[n] = fib(n-1) + fib(n-2);
}
int fibo(int n) //T/c:2^n
{
	if(n==0 || n==1)
		return n;
return  fibo(n-1)+fibo(n-2);
}
//Frog 1
int fun(int i)
{
	if(i==0) return 0;
	if(dp[i] != -1) return dp[i];
   int cost=INT_MAX;

   cost=min(cost,fun(i-1)+abs(h[i]-h[i-1]));
  
  if(i>1)
    cost=min(cost,fun(i-2)+abs(h[i]-h[i-2]));

return dp[i]=cost;
}
//frog 2
int fun1(int i)
{
	if(i==0) return 0;
	if(dp[i] != -1) return dp[i];
   int cost=INT_MAX;
  for(int j=1;j<=k;j++){
  	if(i-j >=0)
   cost=min(cost,fun(i-j)+abs(h[i]-h[i-j]));
}
return dp[i]=cost;
}
//longest incresing subsequence
int lis(int i,vector<int> &a)
{
	if(dp[i] != -1) return dp[i];
	int ans=1;
	for(int j=0;j<i;j++)
	{
		if(a[i]>a[j])
			ans=max(ans,lis(j,a)+1);
	}
	return dp[i]=ans;
}

//P1: coin change
int coinchange(int amount,vector<int> &coins) 
{ int ans=INT_MAX;
   for(int coin: coins)
   {
   ans=min(ans,coinchange(amount));
   }
}

//p2: Edit distacnce




int main()
{
    //memset(dp,-1,sizeof(dp));
// 	int n;
// 	cin>> n;
// vector<int> a(n);
//     for(int i=0;i<=n;i++)
//     {
//     	cin>> a[i];
//     }
//     int ans=0;
//     for(int i=0;i<n;i++)
//     {
//       ans=max(ans,lis(i,a));
//     }
//   cout<< ans;


 //   for(int i=0;i<n;i++)
 //   {
 //   	cin>> h[i];
 //   }
 // cout<<fun1(n-1);
   // cout<< fibo(n);
 // cout<< fib(n);
//Bottom_up
	return 0;
}
