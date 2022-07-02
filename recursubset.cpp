#include<bits/stdc++.h>
using namespace std;
//generate subsequence

void generatesubsequence(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<< out<<"\n";
		return ;
	}
   
   //include current
   out[j]=in[i];
   generatesubsequence(in,out,i+1,j+1);
   
   //exclude current char
   generatesubsequence(in,out,i+1,j);
 
}
//generate brackets
void generate_brac(char *out,int n,int idx,int open,int close)
{
	//base case
	if(idx==2*n)
	{
		out[idx]='\0';
		cout<< out<< endl;
		return ;
	}
    
    if(open<n){
    	out[idx]='(';
    	generate_brac(out,n,idx+1,open+1,close);
    }
    if(close<open){
    	out[idx]=')';
    	generate_brac(out,n,idx+1,open,close+1);
    }
  return ;

}
int main()
{
	int n;
	cin>>n;
	char out[1000];
	int idx=0;
    generate_brac(out,n,0,0,0);

	return 0;
}