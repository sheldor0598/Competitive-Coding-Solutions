#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forreverse(i,a,b) for(i=a;i>=b;i--)
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
	LL n;
	cin>>n;
	LL A[n],B[n],i,gcd;
    fori(i,0,n) cin>>A[i];
    B[n-1]=A[n-1];
    vector<LL>V;
    forreverse(i,n-2,0) B[i]=__gcd(A[i],B[i+1]);
    //fori(i,0,n) cout<<B[i]<<" "; //suffix gcd
    //endl;
    fori(i,0,n-1)
    {
    	gcd=(A[i]*B[i+1])/B[i];
    	V.pb(gcd);
    }
    gcd=V[0];
    fori(i,1,V.size())
    {
    	//cout<<V[i]<<" ";
    	gcd=__gcd(gcd,V[i]);
    }
    //endl;
    cout<<gcd;
	return 0;
}