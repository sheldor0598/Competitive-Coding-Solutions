#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define full(x) x.begin(),x.end()
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

int main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	
	#ifndef ONLINE_JUDGE
	freopen("inputHR.txt","r",stdin);
    freopen("outputHR.txt","w",stdout);
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
	KILL HER NOW
	LL t=1;
	go(t)
	{
		LL n,m,p,r,cnt;
		cin>>n>>m;
		if(n==m)
		{
			cout<<0<<" "<<0;
			continue;
		}
		p=1+(n-m);
		LL maxm= p*(p-1)/2;
		LL minm=n/m;
		p=minm;
		if(n%m!=0)
		{
			r=n%m;
			cnt=m-r;
			minm=(minm*(minm+1)/2);
			minm*=r;
			if(n/m > 1) minm+=cnt*(p*(p-1)/2);
		}
		else minm=m*(minm*(minm-1)/2);
		if(m==1) minm=maxm;
		cout<<minm<<" "<<maxm;
	}
	return 0;
}