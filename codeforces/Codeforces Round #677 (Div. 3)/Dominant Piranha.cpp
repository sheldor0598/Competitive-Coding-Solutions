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
		LL n;
		cin>>n;
		LL i,cnt;
		vector<LL> A(n),B(n);
        fori(i,0,n) cin>>A[i];        
        cnt=count(full(A),A[0]);
        if(cnt==n)
        {
        	cout<<-1<<"\n";
        	continue;
        }
        B=A;
        sortV(B);
        if(A[0]==B[n-1] && A[1]<A[0])
        {
        	cout<<1<<"\n";
        	continue;
        }
        else if(A[n-1]==B[n-1] && A[n-2]<A[n-1])
        {
        	cout<<n<<"\n";
        	continue;
        }
        else
        {
        	LL maxm=B[n-1];
        	fori(i,1,n-1)
        	{
        		if(A[i]==maxm)
        		{
        			if(A[i-1]<A[i] || A[i+1]<A[i])
        			{
			        	cout<<i+1<<"\n";
			        	break;
			        }
        		}
        	}
        }
	}
	return 0;
}