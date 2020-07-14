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

vector<LL> rlA[200000];
vector<LL> lrA[200000];
LL V[200000];
LL dfs(LL c,LL b)
{
	LL p=0,sum=0;
	if(b>c)
	{
		for(LL v : lrA[c])
		{		
			sum+=V[v];
			if(v==b) {p++;break;}
		}
	}
	else if(c>b)
	{
		for(LL v : rlA[c])
		{	
			sum+=V[v];
			if(v==b) {p++;break;}
		}
	}
	if(p>0) return sum;
	else return -1;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	//cin>>t;
	go(t)
	{
		LL n,q;
		cin>>n>>q;
		LL H[n+1],i,j,p;
        fori(i,1,n+1) cin>>H[i];
        fori(i,1,n+1) cin>>V[i];
        fori(i,1,n)
        {
        	p=H[i];
        	lrA[i].pb(i);
        	fori(j,i+1,n+1) 
        	{
        		if(H[j]>p) {lrA[i].pb(j);p=H[j];}
        	}
        }
        lrA[i].pb(i);
        forireverse(i,n,2)
        {
        	p=H[i];
        	rlA[i].pb(i);
        	forireverse(j,i-1,1)
        	{
        		if(H[j]>p) {rlA[i].pb(j);p=H[j];}
        	}
        }
        rlA[i].pb(i);
        /*fori(i,1,n+1)
        {
        	for(LL v : lrA[i]) cout<<v<<"-";
    		endl;
        }
        endl;
        fori(i,1,n+1)
        {
        	for(LL v : rlA[i]) cout<<v<<"-";
    		endl;
        }
        endl;*/
        while(q--)
        {
        	LL a,b,c,cnt=0,sum=0;
        	cin>>a>>b>>c;
        	if(a==1) {V[b]=c; continue;}
        	if(a==2)
        	{
        		if(b==c) {cout<<V[b]<<"\n"; continue;}
        		if(H[b]<=H[c]) {cout<<-1<<"\n"; continue;}
        		if(H[b]>H[c]) cout<<dfs(c,b)<<"\n";
        	}
        }        
	}
	return 0;
}