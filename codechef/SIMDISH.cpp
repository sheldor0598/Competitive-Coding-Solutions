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

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,i,cnt=0,p;
		string S[4],P[4];
        fori(i,0,4) cin>>S[i];
        fori(i,0,4) cin>>P[i];
        fori(i,0,4)
        {
        	p=0;
        	p=count(P,P+4,S[i]);
        	if(p>0) cnt++;
        }
        if(cnt>=2) cout<<"similar\n";
        else cout<<"dissimilar\n";
	}
	return 0;
}