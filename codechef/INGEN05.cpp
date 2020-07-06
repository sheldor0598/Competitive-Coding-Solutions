#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define gof(i,a,b) for(i=a;i<b;i++)
#define got(t) while(t--)
#define take cin
#define in >>
#define give cout
#define out <<
#define nextline give out "\n"

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
	got(t)
	{
		LL n,a=1,b,i=1;
		take in n;
		while(a<=n)
		{
			a=pow(2,i);
			i++;
		}
		b = (a-1-n)*2;
		give out (a-1-b);
		nextline;
	}
	return 0;
}
