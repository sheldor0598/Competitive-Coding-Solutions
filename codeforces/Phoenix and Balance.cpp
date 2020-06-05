#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
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
	LL t;
	cin>>t;
	go(t)
	{
		LL n;
		cin>>n;
		LL A[n],B[n],i,sum=0,sum1=0,sum2=0;
		if(n==2)
		{
			cout<<2<<"\n";
			continue;
		}
		A[0]=2;
		sum=2;
        goflessthan(i,1,n)
	    {
	    	A[i]=2*A[i-1];
	    	sum+=A[i];
	    }
        goflessthan(i,0,(n/2)-1)
        	sum1+=A[i];
    	sum1+=A[n-1];
    	sum2=sum-sum1;
    	cout<<abs(sum1-sum2)<<"\n";
        /*goflessthan(i,0,n) cout<<A[i]<<" ";
        endl;
        /*goflessthan(i,0,n) cout<<B[i]<<" ";
        endl;*/
        /*goflessthan(i,0,n/2)
        {
        	C.pb(A[i]);
        	C.pb(B[i]);
        }
        /*goflessthan(i,0,C.size()) cout<<C[i]<<" ";
        endl;*/
        /*goflessthan(i,0,C.size()/2) sum1+=C[i];
        goflessthan(i,C.size()/2,C.size()) sum2+=C[i];
        cout<<abs(sum1-sum2)<<"\n";*/
	}
	return 0;
}