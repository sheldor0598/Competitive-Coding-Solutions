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
	cin>>t;
	go(t)
	{
		LL n,n1,p,i;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		char A[n+1],B[n+1];
		strcpy(A,s1.c_str());
		strcpy(B,s2.c_str());
		vector<LL> V;
		fori(i,0,n) if(A[i]!=B[i]) {p=i+1;V.pb(p);V.pb(1);V.pb(p);}
		n1=V.size();
		cout<<n1<<" ";
        fori(i,0,n1) cout<<V[i]<<" ";endl;
	}
	return 0;
}