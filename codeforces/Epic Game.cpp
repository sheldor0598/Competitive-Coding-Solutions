#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define sortV(x) sort(x.begin(),x.end())
#define sortVgr(x) sort(x.begin(),x.end(),greater<LL>())
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	//cin>>t;
	go(t)
	{
		LL a,b,n,i=1,p;
		cin>>a>>b>>n;
		while(i>0)
		{
			if(i%2!=0)
			{
				p=__gcd(a,n);
				if(p<=n) n-=p;
				else {cout<<1;break;}
			}
			else
			{
				p=__gcd(b,n);
				if(p<=n) n-=p;
				else {cout<<0;break;}
			}
			i++;
		}
	}
	return 0;
}