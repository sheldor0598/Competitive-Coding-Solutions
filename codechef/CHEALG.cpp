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
		LL n,i,cnt=0;
		string s,s1="",sk;
		take in s;
		n=s.length();
		char c=s[0];
        goflessthan(i,0,n)
        {
        	if(s[i]==c)
        	{
        	    cnt++;
        	    continue;
        	}
        	sk=to_string(cnt);
    		s1+=c;
    		s1+=sk;
    		c=s[i];
    		cnt=1;
        }
        s1+=s[n-1];
        s1+=to_string(cnt);
        if(n>s1.length())
        	give out "YES\n";
        else
        	give out "NO\n";
	}
	return 0;
}
