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
		LL n,k,sum=0,d=0,p,sum1;
		cin>>n>>k;
		LL A[n],i;
        fori(i,0,n) {cin>>A[i];sum+=A[i];}
        if(sum%k==0) cout<<sum/k<<"\n";
        else
    	{
    		p=sum/k;
    		sort(A,A+n);
    		fori(i,0,n)
    		{
    			sum1=sum-A[i];
    			if(sum1/k == p) {d++;break;}
    		}
    		if(d>0) cout<<-1<<"\n";
    		else cout<<p<<"\n";
    	}
	}
	return 0;
}