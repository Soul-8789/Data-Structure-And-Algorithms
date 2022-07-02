#include<bits/stdc++.h>
using namespace std;


// //Greedy Approach
// //Sorting done first while applying greedy techique
// //sometime we donot know relize that we are applying greedy technique because it comes from inside
// //Practise is the main key to get familiar with greed Technique

// // P1: indian coin change
// void coinchange(vector<int> v,int x)
// {
//   int n=v.size();
//   sort(v.begin(),v.end(),greater<int> ());
//   int ans=0;
//   for(int i=0;i<n;i++)
//   {
//   	ans +=x/v[i];
//   	x -= x/v[i]*v[i];
//   }
// cout<< ans<<"\n";

// } 

// //activity selection problem
// void activityselection()
// {
// 	 int n;
//     cin>> n;
//     vector<vector<int>> v1;
//     for(int i=0;i<n;i++)
//     {
//     	int start,end;
//     	cin>> start>> end;
//     	v1.push_back({start,end});
//     }
//     sort(v1.begin(),v1.end(),[&](vector<int> &a,vector<int>  &b){
//     	return a[1]<b[1];
//     });
//     int take=1;
//     int end=v1[0][1];

//     for(int i=1;i<n;i++)
//     {
//     	if(v1[i][0]>=end)
//     	{
//     		take++;
//     		end =v1[i][1];
//     	}
//     }
//     cout<< take<<"\n";
// }
// //fractional knapsack
// bool compare(pair<int,int> p1,pair<int,int> p2)
// {
// 	double v1=(double) p1.first/p1.second;
// 	double v2=(double) p2.first/p2.second;
//    return v1 > v2;
// }
// void fractionalKnapsack()
// {
// 	 int n;
//    cin>> n;
//    vector<pair<int,int> > v(n);
//    for(int i=0;i<n;i++)
//    {
//    	cin>> v[i].first >> v[i].second;
//    }
//     int w;
//    cin>> w;
//    sort(v.begin(),v.end(),compare);
  
//   int ans=0;
//    for(int i=0;i<n;i++)
//    {
//       if(w >= v[i].second)
//       {
//       	ans +=v[i].first;
//       	w -=v[i].second;
//       	continue;
//       }
//       double vw=(double) v[i].first/v[i].second;
//       ans +=vw*w;
//       w=0;
//       break;
//    }
//    cout<< ans<<"\n";
// }
// //optimal merge pattern

void solve()
{
	int n;
	cin>> n;
	vector<int > a(n);
	for(int i=0;i<n;i++)
		{
			cin>> a[i];
		}
    int ans=0;
    priority_queue<int,vector<int> ,greater<int> > minheap;
    for(int i=0;i<n;i++)
    {
    	minheap.push(a[i]);
    }
   while(minheap.size()>1)
   {
   	int e1=minheap.top();
   	minheap.pop();
   	int e2=minheap.top();
   	minheap.pop();
    
    ans +=e1+e2;
    minheap.push(e1+e2);
   }
   cout<< ans<<" ";

}
int main()
{
  solve(); 
	return 0;
}