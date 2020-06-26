#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define gof1(i,a,b) for(i=a;i<b;i++)
#define gof2(i,a,b) for(i=a;i<=b;i++)
#define got(t) while(t--)
#define take cin
#define in >>
#define give cout
#define out <<
#define nextline give out "\n"

LL fact(LL n) 
	{ 
	    LL res = 1,i; 
	    for (i = 2; i <= n; i++) 
	        res = res * i; 
	    return res; 
	} 
LL nCr(LL n, LL r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
}  

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
	freopen("inputGFG.txt","r",stdin);
    freopen("outputGFG.txt","w",stdout);
	#endif
	
	KILL HER
	LL t;
	take in t;
	unsigned long int M = 10e8+7;
	got(t)
	{
		LL n,r,i,ans;
		take in n in r;
		ans=nCr(n,r);
		give out ans%M;
        nextline;
	}
	return 0;
}
