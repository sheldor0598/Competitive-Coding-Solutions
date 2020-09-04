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
		LL a,b,x,y,n,p,q,d,e,minm1,minm2,l,m,z,j;
		cin>>a>>b>>x>>y>>n;
		l=a,m=b,z=n;
		LL minm=a*b;

		p=abs(a-x);
		q=abs(b-y);
		d=min(p,z);
		l-=d;
		if(d<z)
		{
			j=z-d;
			m-=min(j,q);
		}
		minm1=l*m;

		e=min(q,n);
		b-=e;
		if(e<n)
		{
			j=n-e;
			a-=min(j,p);
		}		
		minm2=a*b;

		cout<<min(min(minm1,minm2),minm)<<"\n";
		
	}
	return 0;
}