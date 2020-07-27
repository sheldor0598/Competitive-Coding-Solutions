#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define sortV(x) sort(x.begin(),x.end())
#define sortVgr(x) sort(x.begin(),x.end(),greater<LL>())
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	//cin>>t;
	go(t)
	{
		LL n,m,cnt=0,i,j;
		cin>>n>>m;
		char A[n][m];
        fori(i,0,n)
        	fori(j,0,m)
	        {
	        	cin>>A[i][j];
	        	if(A[i][j]=='C' || A[i][j]=='M' || A[i][j]=='Y') cnt++;
	        }
        if(cnt>0) cout<<"#Color";
        else cout<<"#Black&White";
	}
	return 0;
}