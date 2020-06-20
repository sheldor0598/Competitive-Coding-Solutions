#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
#define go(t) while(t--)
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
	LL n,m,i;
	cin>>n>>m;
	string A[n+1],B[m+1];
	goflessthan(i,1,n+1)
		cin>>A[i];
	goflessthan(i,1,m+1)
		cin>>B[i];
	LL t;
	cin>>t;
	go(t)
	{
		LL a;
		cin>>a;
		LL b=a,c=a;
		if(b%n==0)
			b=b%n + n;
		else
			b%=n;
		if(c%m==0)
			c=c%m + m;
		else
			c%=m;
		cout<<A[b]+B[c]<<"\n";
	}
	return 0;
}
