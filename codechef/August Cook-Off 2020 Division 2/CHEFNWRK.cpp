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
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout);
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
        LL cnt=1,sum=0,p=0;
        fori(i,0,n)
        {
        	if(A[i]>k) {p++;break;}
        }
        fori(i,0,n)
        {
        	if(sum+A[i]<=k) 
        	{
        		sum+=A[i];
        		if(sum<=k) continue;
        		else {sum=A[i];cnt++;}
        	}
        	else {sum=A[i];cnt++;}
        }
        if(p>0) cout<<-1<<"\n";
        else cout<<cnt<<"\n";
	}
	return 0;
}