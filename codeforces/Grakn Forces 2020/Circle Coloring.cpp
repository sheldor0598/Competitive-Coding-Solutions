#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define FAST ios_base::sync_with_stdio(false);
#define INPT cin.tie(NULL);
#define OUTPT cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define full(x) x.begin(),x.end()
#define sortV(x) sort(full(x))
#define sortVgr(x) sort(full(x),greater<LL>()) // x -> vector
#define reverse(x) reverse(full(x)) // x -> string
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define M 1e9+7

LL gcd(LL a, LL b)
{
	if(a==0) return b;
	else return gcd(b%a,a);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);
	#endif
	FAST INPT OUTPT
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,k;
		cin>>n;
		LL A[n+1],B[n+1],C[n+1],i,j;
        fori(i,1,n+1) cin>>A[i];
        fori(i,1,n+1) cin>>B[i];
        fori(i,1,n+1) cin>>C[i];
        vector<LL> D;
        D.pb(-1);
        D.pb(A[1]);
        fori(i,2,n)
        {
        	if(A[i]!=D[i-1]) D.pb(A[i]);
        	else if(B[i]!=D[i-1]) D.pb(B[i]);
        	else if(C[i]!=D[i-1]) D.pb(C[i]);
        }
        if(D[1]!=A[n] && A[n]!=D[n-1]) D.pb(A[n]);
    	else if(D[1]!=B[n] && B[n]!=D[n-1]) D.pb(B[n]);
    	else if(D[1]!=C[n] && C[n]!=D[n-1]) D.pb(C[n]);
    	
        fori(i,1,n+1) cout<<D[i]<<" "; cout<<"\n";
	}
	return 0;
}