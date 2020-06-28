#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define mp make_pair

int main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif

	#ifndef ONLINE_JUDGE
	freopen("inputGFG.txt","r",stdin);
    freopen("outputGFG.txt","w",stdout);
	#endif
	*/
	
	KILL HER
	LL t;
	cin>>t;
	go(t)
	{
		LL n,i,j,d,k,o=0;
		string s;
		cin>>s;
		n=s.length();
		LL p=n;
		while(p>0)
	    {
	        goflessthan(i,0,n-1)
    		{
    		    d=0;
    		    while(s[i+1]==s[i])
    		    {
    		        d++;
    		        goflessthan(k,i,n)
    		            s[k]=s[k+1];
    	            n--;
    		    }
    		    if(d>0)
    		    {
    		        goflessthan(k,i,n)
    		            s[k]=s[k+1];
    	            n--;
    	            i--;
    		    }
    		}
    		p--;
	    }
		goflessthan(i,0,n)
            cout<<s[i];
        endl;
	}
	return 0;
}