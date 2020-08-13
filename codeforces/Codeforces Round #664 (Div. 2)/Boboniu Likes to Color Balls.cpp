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
		LL r,g,b,w,cnt=0;
		cin>>r>>g>>b>>w;
		if(r%2==0) cnt++; if(g%2==0) cnt++; if(b%2==0) cnt++; if(w%2==0) cnt++;
		if(cnt==2) cout<<"No\n";
		else if((r%2==0 && g%2==0 && b%2==0) || (r%2!=0 && g%2!=0 && b%2!=0)) cout<<"Yes\n";
		else if(r==0 && g%2!=0 && b%2!=0) cout<<"No\n";
		else if(r%2!=0 && g==0 && b%2!=0) cout<<"No\n";
		else if(r%2!=0 && g%2!=0 && b==0) cout<<"No\n";
		else cout<<"Yes\n";

	}
	return 0;
}