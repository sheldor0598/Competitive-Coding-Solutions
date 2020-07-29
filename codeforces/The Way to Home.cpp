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
		LL n,d,d1,d2,i,cnt=0;
		cin>>n>>d;
		string s;
		cin>>s;
		char A[n+1];
		strcpy(A,s.c_str());
		vector<LL> V;
		d1=0;
		fori(i,1,n) if(A[i]=='1') V.pb(i);
		LL n1=V.size();
		if(n1==1)
		{
			if(V[0]<=d) cout<<1;
			else cout<<-1;
			continue;
		}
		//fori(i,0,n1) cout<<V[i]<<" "; endl;
		fori(i,0,n1-1)
		{
			//cout<<V[i+1]<<'-'<<d1<<"\n";
			if(V[i+1]-d1==d) {cnt++;d1=V[i+1];i++;}
			else if(V[i+1]-d1>d && V[i]-d1<=d) {cnt++;d1=V[i];}
			else if(V[i+1]-d1>d && V[i]-d1>d) break;
			if(V[i+1]==n-1) {cnt++;break;}
			//cout<<i<<'-'<<cnt<<"@ ";
		}
		//cout<<d1<<"\n";
		if(V[n1-1]-d1>d) cout<<-1;
		else cout<<cnt;
		//endl;
	}
	return 0;
}