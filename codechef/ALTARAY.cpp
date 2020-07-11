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
		LL n,p,q;
		cin>>n;
		LL A[n],B[n],i;
		fill(B,B+n,1);
        fori(i,0,n) cin>>A[i];
        fori(i,0,n-1)
        {
            p=A[n-2-i]*-1;
            q=A[n-1-i];
            if((p>=0 && q>=0) || (p<=0 && q<=0))
            B[n-2-i]+=B[n-1-i];
        }
        fori(i,0,n) cout<<B[i]<<" "; endl;
	}
	return 0;
}