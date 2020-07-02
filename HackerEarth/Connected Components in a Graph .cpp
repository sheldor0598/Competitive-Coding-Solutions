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

vector<LL> A[100001];
LL vis[100001]={0};
void dfs(LL v)
{
	vis[v]=1;
	for(LL child:A[v])
	{
		if(vis[child]==0) dfs(child);
	}
}
int main()
{	
	#ifndef ONLINE_JUDGE
	freopen("inputHE.txt","r",stdin);
	freopen("outputHE.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	//cin>>t;
	go(t)
	{
		LL n,e,i,cnt=0,a,b;
		cin>>n>>e;
        fori(i,1,e+1)
        {
        	cin>>a>>b;
        	A[a].pb(b);
        	A[b].pb(a);
        }
        fori(i,1,n+1)
        {
        	if(vis[i]==0)
        	{
        		dfs(i);
        		cnt++;
        	}
        }
        cout<<cnt<<"\n";        
	}
	return 0;
}