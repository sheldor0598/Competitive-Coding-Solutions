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
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout);
	#endif
	FAST INPT OUTPT
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,q,x,y,a,b,cntx,cnty,sum,i;
		string s;
		cin>>s;
		cin>>x>>y;
		map<char,LL> mp1;
		mp1['L']=0;
		mp1['R']=0;
		mp1['U']=0;
		mp1['D']=0;
		n=s.length();
		char A[n+1];
		strcpy(A,s.c_str());
		fori(i,0,n) mp1[A[i]]++;
		cin>>q;
		while(q--)
		{
			cin>>a>>b;
			sum=0;
			char p='@',r='#';
			if(a>x) p='R';
			else if(a<x) p='L';
			if(b>y) r='U';
			else if(b<y) r='D';
			cntx=abs(a-x);
			cnty=abs(b-y);
			if(p!='@')
			{
				if(cntx<=mp1[p]) sum+=cntx;
				else {cout<<"NO\n";continue;}
			}
			if(r!='#')
			{
				if(cnty<=mp1[r]) sum+=cnty;
				else {cout<<"NO\n";continue;}
			}
			cout<<"YES "<<sum<<"\n";
		}
	}
	return 0;
}