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
		LL n,k;
		cin>>n>>k;
		LL A[n],i;
        fori(i,0,n) cin>>A[i];
        sort(A,A+n);
        LL sum1=0,sum2=0,sum3=0,sum4=0;
        sum1=accumulate(A,A+k,sum1);
        sum2=accumulate(A+k,A+n,sum2);
        sort(A,A+n,greater<LL>());
        sum3=accumulate(A,A+k,sum3);
        sum4=accumulate(A+k,A+n,sum4);
        cout<<max(abs(sum1-sum2),abs(sum3-sum4))<<"\n";
	}
	return 0;
}