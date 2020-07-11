#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define full(x) x.begin(),x.end()
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,i,j,p;
		stack<char> S1;
		stack<char> S2;
		stack<char> S3;
		string s;
		cin>>s;
		n=s.length();
		char A[n+1],k;
		strcpy(A,s.c_str());
        fori(i,0,n)
        {
        	if(A[i]==')')
        	{
        		k=S1.top();
        		while(k!='(')
        		{
        			k=S1.top();
        			S1.pop();
        			S2.push(k);
        		}
        	}
        	else if(A[i]=='(' || A[i]=='+' || A[i]=='-' || A[i]=='*' || A[i]=='/' || A[i]=='^')
        		S1.push(A[i]);
        	else S2.push(A[i]);
        	p=S1.size();

        }
        while (!S2.empty()) 
	    { 
	        S3.push(S2.top());
	        S2.pop(); 
	    } 
	    while (!S3.empty()) 
	    { 
	    	k=S3.top();
	    	if(k!='(') cout<<k;
	        S3.pop();
	    } 
	    endl;
	}
	return 0;
}