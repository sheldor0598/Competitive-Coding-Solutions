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
		LL n,cnt=0;
		cin>>n;
		LL A[n],i;
        fori(i,0,n) cin>>A[i];
        LL minm=A[0],maxm=A[0];
        fori(i,1,n)
        {
        	if(A[i]>maxm)
        	{
        		cnt++;
        		maxm=A[i];
        	}
        	else if(A[i]<minm)
        	{
        		cnt++;
        		minm=A[i];
        	}
        }
        cout<<cnt;
	}
	return 0;
}