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
		LL n;
		cin>>n;
		LL A[n],i,B[n],cnt=0;
		fill(B,B+n,1);
        fori(i,0,n) cin>>A[i];
        fori(i,1,n) if(A[i]>=A[i-1]) B[i]+=B[i-1];
        fori(i,0,n) {/*cout<<B[i]<<" ";*/cnt+=B[i];}
        cout<<cnt<<"\n";
	}
	return 0;
}