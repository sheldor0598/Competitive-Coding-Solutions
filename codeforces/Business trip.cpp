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
#define pf push_front
#define pof pop_front
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
		LL k,cnt=0;
		cin>>k;
		LL A[12],i;
        fori(i,0,12) cin>>A[i];
        sort(A,A+12,greater<LL>());
        i=0;
        while(k>0 && i<12)
        {
            cnt++;
        	k-=A[i];
        	i++;
        }
        if(k>0 || cnt>12) cout<<-1;
        else cout<<cnt;
	}
	return 0;
}