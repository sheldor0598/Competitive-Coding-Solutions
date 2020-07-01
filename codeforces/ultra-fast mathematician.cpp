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
	string s1,s2;
	take in s1 in s2;
	LL i,xor1,n=s1.length();
	goflessthan(i,0,n)
	{
		xor1=(s1[i]-'0') ^ (s2[i]-'0');
		give out xor1;
	}
	return 0;
}
