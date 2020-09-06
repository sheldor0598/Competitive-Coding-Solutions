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
		LL m,s,x,y,_9=9;
		cin>>m>>s;
		if(s>9*m)
		{
			cout<<"-1 -1\n";
			continue;
		}
		if(s==0)
		{
			if(m==1) cout<<"0 0\n";
			else cout<<"-1 -1\n";
			continue;
		}
		LL A[m]={0},B[m]={0},i;
		x=s,y=s;
		A[0]=1,x--;
		for(i=m-1;i>=0;i--)
		{
			A[i]+=min(_9,x);
			x-=A[i];
		}
		fori(i,0,m)
		{
			B[i]+=min(_9,y);
			y-=B[i];
		}
		fori(i,0,m) cout<<A[i];
		cout<<" ";
		fori(i,0,m) cout<<B[i];
	}
	return 0;
}