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
	go(t)
	{
		LL n,x,a,b,x1,x2,da,db,maxm;
		cin>>n>>x>>a>>b;
		LL minm=min(a,b);
		LL maxmm=max(a,b);
		a=minm;b=maxmm;
		maxm=b-a;
		//cout<<a<<" "<<b<<"\n";
		db=n-b;
		da=a-1;
		//cout<<da<<" "<<db<<"\n";
		x1=min(x,db);
		x-=x1;
		b+=x1;
		x2=min(x,da);
		//cout<<x1<<" "<<x2<<"\n";
		//cout<<a<<" "<<b<<"\n";
		a-=x2;
		cout<<b-a<<"\n";
	}
	return 0;
}
