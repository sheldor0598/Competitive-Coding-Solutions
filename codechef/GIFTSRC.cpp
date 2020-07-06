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
	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER
	LL t;
	cin>>t;
	go(t)
	{
		LL n,x=0,y=0,i=0;
		cin>>n;
		char s[n];
		cin>>s;
        while(i<n)
        {
        	if(s[i]=='L')
        	{
        		x--;
        		while(s[i]=='L' || s[i]=='R')
        			i++;
        	}
        	if(s[i]=='U')
        	{
        		y++;
        		while(s[i]=='U' || s[i]=='D')
        			i++;
        	}
        	if(s[i]=='R')
        	{
        		x++;
        		while(s[i]=='L' || s[i]=='R')
        			i++;
        	}
        	if(s[i]=='D')
        	{
        		y--;
        		while(s[i]=='U' || s[i]=='D')
        			i++;
        	}
        }
        cout<<x<<" "<<y<<"\n";
	}
	return 0;
}