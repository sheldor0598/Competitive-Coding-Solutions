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
		LL n,p,i,j,k,d,a,b;
		cin>>n;
		deque<LL> q;
		vector<LL> A;
		fori(i,1,n+1) q.pb(i);
		while(n>1)
		{
			//fori(i,0,n) cout<<q[i]<<" ";endl;
			A.pb(q[n-1]);
			A.pb(q[n-2]);
			d=(q[n-1]+q[n-2]);
			//cout<<d<<"\n";
			q.pob();q.pob();
			if(d%2==0) q.pb(d/2);
			else q.pb(d/2 + 1);	
			n--;		
		}
		cout<<q[0]<<"\n";
		fori(i,0,A.size())
		{
			cout<<A[i]<<" "<<A[i+1]<<"\n";
			i++;
		}

        
	}
	return 0;
}