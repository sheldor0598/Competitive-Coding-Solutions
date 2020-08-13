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
	//cin>>t;
	go(t)
	{
		LL n,m,sx,sy,p=0,k;
		cin>>n>>m>>sx>>sy;
		LL dp[n+1][m+1],i,j;
		memset(dp,0,sizeof(dp));
		dp[sx][sy]=1;
		cout<<sx<<" "<<sy<<"\n";
		fori(j,sy,m+1)
		{
			if(dp[sx][j]==1) continue;
			cout<<sx<<" "<<j<<"\n";
			dp[sx][j]=1;
		}
		for(j=sx;j<=n;j++)
		{
			if(dp[j][m]==1) continue;
			cout<<j<<" "<<m<<"\n";
			dp[j][m]=1;
		}
		for(j=n;j>=1;j--)
		{
			if(dp[j][m]==1) continue;
			cout<<j<<" "<<m<<"\n";
			dp[j][m]=1;
		}
		for(i=m-1;i>=1;i--)
		{
			p++;
			if(p%2!=0)
			{
				fori(j,1,n+1)
				{
					if(dp[j][i]==1) continue;
					cout<<j<<" "<<i<<"\n";
					dp[j][i]=1;
				}
			}
			else if(p%2==0)
			{
				for(j=n;j>=1;j--)
				{
					if(dp[j][i]==1) continue;
					cout<<j<<" "<<i<<"\n";
					dp[j][i]=1;
				}
			}
		}
			
		/*endl;
		fori(i,1,n+1) { fori(j,1,m+1) cout<<dp[i][j]<<" "; endl;}*/

	}
	return 0;
}