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
		LL n,x1,y1,z1,x2,y2,z2,sum,p,q;
		cin>>x1>>y1>>z1;
		cin>>x2>>y2>>z2;
		
		p=min(z1,y2);
		sum=2*p;
		z1-=p;y2-=p;

		q=min(z1,z2);
		z1-=q;z2-=q;

		q=min(y1,y2);
		y1-=q;y2-=q;

		q=min(x2,z1);
		z1-=q;x2-=q;

		q=min(x2,y1);
		y1-=q;x2-=q;

		q=min(x1,z2);
		z2-=q;x1-=q;

		q=min(x1,y2);
		y2-=q;x1-=q;

		sum-=(2*z1 + 2*z2);
		cout<<sum<<"\n";

	}
	return 0;
}