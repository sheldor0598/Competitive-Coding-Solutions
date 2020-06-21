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
	/*
	#ifndef ONLINE_JUDGE				#ifndef ONLINE_JUDGE				#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);	freopen("inputCC.txt","r",stdin);	freopen("input.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);	freopen("outputCC.txt","w",stdout); freopen("output.txt","w",stdout);
	#endif 								#endif 								#endif

	#ifndef ONLINE_JUDGE				#ifndef ONLINE_JUDGE
	freopen("inputHR.txt","r",stdin);	freopen("inputGFG.txt","r",stdin);
    freopen("outputHR.txt","w",stdout); freopen("outputGFG.txt","w",stdout);
	#endif 								#endif
	*/
	
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,i,j,p,cnt=0;
		cin>>n;
		vector<LL> A;
		A.clear();
		LL d=1;
		if(n==1) { cout<<"FastestFinger\n";continue;}
		else if(n%2!=0) { cout<<"Ashishgup\n";continue;}
		else if(n%2==0)
		{
			A.clear();
			for(i=1;i<=sqrt(n);i++)
		    { 
		        if(n%i==0) 
		        { 
		        	p=n/i;
		            if(p==i)
		            {
		            	if(p%2!=0) A.pb(p);
		            } 
		            else 
	            	{
	            		if(i%2!=0) A.pb(i);
	            		if(p%2!=0) A.pb(p);
	            	}
	            }
	        }
	        LL x=A.size();
	        //for(i=0;i<x;i++) cout<<A[i]<<" "; endl;
			while(n>1)
			{
		        if(x==1)
	        	{
	        		if(n-1==1) { cout<<"Ashishgup\n";break;}
		        	else if(n-1>1) { cout<<"FastestFinger\n";break;}
	        	}
		        else
		        {
		        	LL b=n/A[x-1];
		        	if(b%2==0 && b-1==1) { cout<<"FastestFinger\n";break;}
		        	else if(b%2==0 && b-1>1) { cout<<"Ashishgup\n";break;}
		        }
		        if(n==1)
		        {
		        	if(d%2!=0) { cout<<"Ashishgup\n";break;}
		        	else { cout<<"FastestFinger\n";break;}
		        }
		        d++;
		    }
	    }
	}
	return 0;
}