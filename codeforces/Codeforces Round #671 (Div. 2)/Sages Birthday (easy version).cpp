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
	//cin>>t;
	go(t)
	{
		LL n;
		cin>>n;
		LL A[n],i;
        fori(i,0,n) cin>>A[i];
        vector<LL> B;
        sort(A,A+n);
        fori(i,0,n/2)
        {
        	B.pb(A[n-i-1]);
        	B.pb(A[i]);
        }
        if(n%2!=0) B.pb(A[i]);
        if(n%2==0) cout<<n/2 - 1;
        else cout<<n/2;
        endl;
        fori(i,0,n) cout<<B[i]<<" ";
	}
	return 0;
}