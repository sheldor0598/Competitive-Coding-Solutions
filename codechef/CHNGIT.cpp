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
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER
	LL t;
	take in t;
	go(t)
	{
		LL n,cnt=0,p,j;
		take in n;
		LL A[n],i;
        goflessthan(i,0,n)
            take in A[i];
        p=count(A,A+n,A[0]);
        LL maxm=*max_element(A,A+n);
        LL B[maxm+1];
        fill(B,B+maxm+1,0);
        if(p==n)
        	give out 0 out endl;
        else
        {
        	goflessthan(i,0,n)
	        	B[A[i]]++;
        	LL maxm1=0;
        	goflessthan(i,0,maxm+1)
        	{
        		if(B[i]>maxm1)
        			maxm1=B[i];
        	}
        	give out n-maxm1 out endl;
        }
	}
	return 0;
}
