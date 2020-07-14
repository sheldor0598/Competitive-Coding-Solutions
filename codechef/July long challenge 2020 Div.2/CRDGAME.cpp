#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define full(x) x.begin(),x.end()
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n;
		cin>>n;
		LL a,b,cnta=0,cntb=0;
        while(n--)
        {
        	cin>>a>>b;
        	LL p=0,q=0;
        	while(a>0)
        	{
        		p+=a%10;
        		a/=10;
        	}
        	while(b>0)
        	{
        		q+=b%10;
        		b/=10;
        	}
        	if(p>q) cnta++;
        	else if(q>p) cntb++;
        	else if(p==q) {cnta++;cntb++;}
        }
        if(cnta>cntb) cout<<0<<" "<<cnta;
        else if(cntb>cnta) cout<<1<<" "<<cntb;
        else if(cnta==cntb) cout<<2<<" "<<cnta;
        endl;
	}
	return 0;
}