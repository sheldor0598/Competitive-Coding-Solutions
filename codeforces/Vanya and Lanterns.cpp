#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
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
	LL n,l;
	double maxm,mid;
	cin>>n>>l;
	LL A[n],i;
    goflessthan(i,0,n) cin>>A[i];
    sort(A,A+n);
    /*goflessthan(i,0,n) cout<<A[i]<<" ";
    endl;*/
    maxm=A[0]-0;
    goflessthan(i,0,n-1)
    {
    	mid=(double)(A[i]+A[i+1])/2;
    	//cout<<mid<<" ";
    	maxm=max(maxm,max(mid-A[i],A[i+1]-mid));
    }
    maxm=max(maxm,(double)(l-A[n-1]));
    cout<<fixed<<setprecision(10)<<maxm;
	return 0;
}