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
		LL A[n][n],i,j;
        fori(i,0,n)
        {
        	fori(j,0,n)
        	{
        		if(i==j || i+j==n-1) A[i][j]=1;
  				else A[i][j]=0;
        	}
        }
        if(n%2!=0)
        {
        	LL p=n/2;
        	A[0][p]=1;
        	A[n-1][p]=1;
        	A[p][0]=1;
        	A[p][n-1]=1;
        }
        fori(i,0,n)
        {
        	fori(j,0,n) cout<<A[i][j]<<" ";
        	endl;
        }        
	}
	return 0;
}