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
		cin>>n>>k;
		LL A[n],i;
        fori(i,0,n) cin>>A[i];
        sort(A,A+n);
        forireverse(i,n-2,0)
        {
        	if(k==0) break;
        	if(A[i]>0)
    		{
    			A[n-1]+=A[i];
	        	A[i]=0;
	        	k--;
	        }
        }
        sort(A,A+n);
        //fori(i,0,n) cout<<A[i]<<" ";endl;
        cout<<abs(A[n-1]-A[0])<<"\n";
        
	}
	return 0;
}