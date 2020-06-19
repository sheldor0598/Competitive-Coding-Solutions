#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
#define go(t) while(t--)
#define take cin
#define in >>
#define give cout
#define out <<
#define endl "\n"
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
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER
	LL n,p,i,minm,maxm,posmin,posmax,cnt=0;
	take in n;
	vector<LL> A;
    goflessthan(i,0,n)
    {
    	take in p;
    	A.pb(p);
    }
    minm=*min_element(A.begin(),A.end());
    maxm=*max_element(A.begin(),A.end());
    goflessthan(i,0,n)
	    if(A[i]==minm)
    		posmin=i;
    goflessthan(i,posmin,n-1)
    {
    	if(A[i]<A[i+1])
	    {
	    	swap(A[i],A[i+1]);
	    	cnt++;
	    }
    }
    goflessthan(i,0,n)
	    if(A[i]==maxm)
    	{
    		posmax=i;
    		break;
    	}
    gofminus(i,posmax,1)
    {
    	if(A[i]>A[i-1])
    	{
    		swap(A[i],A[i-1]);
    		cnt++;
    	}
    }
    give out cnt;
	return 0;
}
