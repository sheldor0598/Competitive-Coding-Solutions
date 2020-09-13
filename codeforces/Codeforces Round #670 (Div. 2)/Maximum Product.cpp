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
		LL A[n],i,j,k=5,prod=1;
        fori(i,0,n) cin>>A[i];
        sort(A,A+n); 
		if(A[n-1]==0 && (k&1))
		{
			cout<<0<<"\n";
			continue; 
		}
		if(A[n-1]<=0 && (k&1)) 
		{ 
			forireverse(i,n-1,n-k) prod*=A[i]; 
			cout<<prod<<"\n";
			continue; 
		} 
		i=0,j=n-1; 
		if(k&1) 
		{ 
			prod*=A[j]; 
			j--;k--; 
		} 
		k>>=1; 
		LL p=0;
		while(p<k)
		{ 
			LL lprod=A[i]*A[i+1]; 
			LL rprod=A[j]*A[j-1]; 
			if (lprod>rprod) 
			{ 
				prod*=lprod; 
				i+=2; 
			} 
			else 
			{ 
				prod*=rprod; 
				j-=2; 
			} 
			p++;
		} 
		cout<<prod<<"\n"; 
	}
	return 0;
}