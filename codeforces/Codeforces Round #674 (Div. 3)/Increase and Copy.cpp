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
		LL n,p;
		cin>>n;
		if(n==1)
		{
			cout<<0<<"\n";
			continue;
		}
		stack<LL> s;
		LL a=1,cnt=0;
		s.push(INT_MAX);
		while(a>0)
		{
			p=n/a;
			if(n%a!=0) p++;
			p--;
			p+=cnt;
			if(s.top()>=p)
			{
				s.pop();
				s.push(p);
			}
			else
			{
				cout<<s.top()<<"\n";
				break;
			}
			a++;cnt++;
		}
        
	}
	return 0;
}