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
		LL n,i,p,maxm,cnt=0;
		string s;
		take in s;
		n=s.length();
		LL ch[26]={0};
		goflessthan(i,0,n)
		{
			p=(s[i]-'0')-49;
			ch[p]++;
		}
		maxm=ch[0];
		goflessthan(i,0,26)
		{
			if(ch[i]>=maxm)
			{
				maxm=ch[i];
				p=i;
			}
		}
		goflessthan(i,0,26)
		{
			if(i!=p)
				cnt+=ch[i];
		}
		//give out maxm out " " out cnt out " " out p out endl;
		if(maxm==cnt)
			give out "YES" out endl;
		else
			give out "NO" out endl;
	}
	return 0;
}
