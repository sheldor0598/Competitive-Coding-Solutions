#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define gof1(i,a,b) for(i=a;i<b;i++)
#define gof2(i,a,b) for(i=a;i<=b;i++)
#define go(t) while(t--)
#define take cin
#define in >>
#define give cout
#define out <<
#define endl "\n"

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
		LL n;
		take in n;
		LL A[n],i,max=0;
        gof1(i,0,n)
        {
        	take in A[i];
        	if(max<A[i])
        		max=A[i];
        }
        LL B[max+1];
        fill(B,B+max+1,0);
        LL cnt=0;
        gof1(i,0,n)
            B[A[i]]++;
        gof2(i,1,max)
        {
        	if(B[i]==1)
        	{
        		if(B[i-1]==1 || B[i+1]==1)
        			continue;
        		else
        		{
        			B[i+1]++;
        			cnt++;
        		}
        	}
        	else 
        	    continue;
        }
        give out cnt out endl;
	}
	return 0;
}
