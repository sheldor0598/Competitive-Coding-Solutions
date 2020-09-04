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
		LL n,x,y,i,p,diff,cnt=0,q,d,r;
		cin>>n>>x>>y;
		vector<LL> V;
		V.pb(x);V.pb(y);
		p=n-2;
		if(p==0)
		{
			cout<<x<<" "<<y<<"\n";
			continue;
		}
		diff=y-x;
        for(i=n;i>=1;i--)
    	{
    		if(diff%i==0)
    		{
    			q=diff/i;
    			r=diff/q + 1;
    			if(r<=n) break;
    		}
    	}
    	LL b=x,c=y,g=y;
        while(x<y)
        {
        	x+=q;
        	if(x==g) continue;
        	V.pb(x);
        	cnt++;
        }
        if(cnt==p)
        {
        	sortV(V);
        	fori(i,0,n) cout<<V[i]<<" ";
        	endl;
        	continue;
        }
        else d=abs(p-cnt);
        while(b-q>=1 && d>0)
        {
        	b-=q;
        	V.pb(b);
        	d--;
        }
        while(d>0)
        {
        	c+=q;
        	V.pb(c);
        	d--;
        }
        sortV(V);
        fori(i,0,n) cout<<V[i]<<" "; endl;
	}
	return 0;
}