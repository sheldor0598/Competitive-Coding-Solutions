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
		if(n%3==0)
		{
			cout<<n/3<<" "<<"0 0\n";
			continue;
		}
		else if(n%5==0)
		{
			cout<<"0 "<<n/5<<" "<<"0\n";
			continue;
		}
		else if(n%7==0)
		{
			cout<<"0 0 "<<n/7<<"\n";
			continue;
		}
		else
		{
			LL th=n/3;
			LL p=n%3,i=1,f=0,s=0;
			if(p==1 && th>=2)
			{
				th-=2;
				s=1;
				cout<<th<<" "<<f<<" "<<s<<"\n";
			}
			else if(p==2 && th>=1)
			{
				th--;
				f=1;
				cout<<th<<" "<<f<<" "<<s<<"\n";
			}
			else cout<<-1<<"\n";
		}
        
	}
	return 0;
}