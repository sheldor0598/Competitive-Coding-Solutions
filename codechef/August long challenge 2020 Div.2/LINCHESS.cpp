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
		LL n,m,val,minm=INT_MAX,cnt=0;
		cin>>n>>m;
		LL A[n+2],i;
        fori(i,1,n+1) cin>>A[i];
        A[n+1]=m;
        sort(A+1,A+n+2);
        fori(i,1,n+2)
        {
        	if(A[i]==m) break;
        	if(m%A[i]==0)
    		{
    			LL diff=m/A[i];
    			if(diff<minm)
	        	{
	        		cnt++;
	        		minm=diff;
	        		val=A[i];
	        	}
    		}
        }
        if(cnt>0) cout<<val;
        else cout<<-1; endl;
	}
	return 0;
}