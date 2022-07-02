#include<bits/stdc++.h>
using namespace std;


//Q1.Number to spellings
// char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

// void problem1(int n)
// {
// 	if(n==0)
// 		return ;
//     problem1(n/10);
//    after the function
//     int digit=n%10;
//     cout<<words[digit]<<" ";
//     return;
//}

//P2:string to integer

// int stringtoint(char *a,int n)
// {
//   	if(n==0)
// 		return 0;

// 	int digit=a[n-1]-'0';//last digit

//     int small_ans=stringtoint(a,n-1);
//    //after the function
    
//     return small_ans*10 +digit;
   
// }


//p3: replace pi with 3.14
// void replacepi()

//Place the Tiles
//f(n-1)+f(n-4)
// int placeTile(int n)
// {
// 	if(n<=3)
// 	{
// 		return 1;
// 	}
//  return placeTile(n-1)+placeTile(n-4);
// }

//P4:Ladder problem
// int ladderprob(int n,int k)
// {
// 	if(n<0)
// 	{
// 		return 0;
// 	}
// 	if(n==0)
// 	{
// 		return 1;
// 	}int ans=0;
// 	for(int i=1;i<=k;i++)
//    {
//    	ans +=ladderprob(n-i,k);
//    }
//    return ans;
// }
//P5:Friend Pairing Problem
int Friendpair(int n,int k)
{
	if(n<0)
	{
		return 0;
	}
	if(n<=2)
	{
		return n;
	}
	int ans=1;
//f(n)=i*f(n-i)+(n-1)C1*f(n)

}
//Count the binary  string
//which have No consecutive ones;

//f(n)=f(n-1)+f(n-2);
int main()
{
	int n;
	cin>> n;
	cout<<ladderprob(4,3);

    return 0; 
}
