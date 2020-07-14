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
		LL n,i,a,b;
		cin>>n;
		map<LL,LL> mp1;
		map<LL,LL> mp2;
		i=4*n-1;
        while(i--)
        {
        	cin>>a>>b;
        	mp1[a]++;
        	mp2[b]++;
        }
        for(auto v : mp1) if(v.second %2!=0) { cout<<v.first<<" ";break;}
    	for(auto v : mp2) if(v.second %2!=0) { cout<<v.first<<" ";break;}
	}
	return 0;
}