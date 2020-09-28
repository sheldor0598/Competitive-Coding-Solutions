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
		LL n,i,k;
		cin>>n;
		string a;
		cin>>a;
		LL A[n];
		fori(i,0,n) A[i]=a[i]-'0';
		vector<LL> B,C,D;
		fori(i,0,n)
		{
			if(A[i]%2==0 && A[i]!=-1) {B.pb(A[i]);A[i]=-1;}
			i++;
		}
		fori(i,0,n)
		{
			if(A[i]%2!=0 && A[i]!=-1) {B.pb(A[i]);A[i]=-1;}
			i++;
		}
		fori(i,1,n)
		{
			if(A[i]%2!=0 && A[i]!=-1) {C.pb(A[i]);A[i]=-1;}
			i++;
		}
		fori(i,1,n)
		{
			if(A[i]%2==0 && A[i]!=-1) {C.pb(A[i]);A[i]=-1;}
			i++;
		}
		//fori(i,0,B.size()) cout<<B[i]<<" "; endl;
		//fori(i,0,C.size()) cout<<C[i]<<" "; endl;
		if(n==1)
		{
			k=a[0]-'0';
			if(k%2!=0) cout<<1;
			else cout<<2;
		}
		else
		{
			if(n%2!=0)
			{
				if(B[B.size()-1]%2!=0) cout<<1;
				else cout<<2;
			}
			else
			{
				if(C[C.size()-1]%2!=0) cout<<1;
				else cout<<2;
			}
		}
		endl;        
	}
	return 0;
}