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
LL dist[100001]={0};

void dfs(LL v,LL d)
{
	vis[v]=1;
	for(LL child : A[v])
	{
		if(vis[child]==0)
		{
			dist[child]=d+1;
			dfs(child,dist[child]);
		}
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
		LL n,i,u,v,q,a,minm=INT_MAX,val;
		cin>>n;
		fori(i,0,n-1)
		{
			cin>>u>>v;
			A[u].pb(v);
			A[v].pb(u);
		}
		fori(i,1,n+1) dfs(i,dist[i]);
		cin>>q;
		LL B[q];
		fori(i,0,q) cin>>B[i];
        sort(B,B+q);
        //fori(i,1,n+1) cout<<dist[i]<<" "; endl;
        fori(i,0,q) if(dist[B[i]]!=0 && dist[B[i]]<minm) { minm=dist[B[i]]; val=B[i]; }
        cout<<val;
	}
	return 0;
}
