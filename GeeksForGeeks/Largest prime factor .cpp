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
	
	KILL HER
	LL t;
	cin>>t;
	go(t)
	{
		LL n,i;
		vector<LL> A;
		cin>>n;
		while(n%2==0)
	    {
	        A.pb(2);
	        n/=2;
	    }
	    for(i=3;i<=sqrt(n);i+=2)
	    {
	        while(n%i==0)
	        {
	            A.pb(i);
	            n/=i;
	        }
	    }
	    if(n>2) A.pb(n);
	    cout<<A[A.size() - 1]<<"\n";
	}
	return 0;
}