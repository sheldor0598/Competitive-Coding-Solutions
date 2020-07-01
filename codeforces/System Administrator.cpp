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
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER
	LL t;
	cin>>t;
	LL suma=0,sumb=0,totala=0,totalb=0;
	go(t)
	{
		LL n,x,y;
		cin>>n>>x>>y;
		if(n==1)
		{
			suma+=x;
			totala+=10;
		}
		else
		{
			sumb+=x;
			totalb+=10;
		}
	}
	if(suma>=(totala/2))
		cout<<"LIVE\n";
	else
		cout<<"DEAD\n";
	if(sumb>=(totalb/2))
		cout<<"LIVE\n";
	else
		cout<<"DEAD\n";
	return 0;
}
