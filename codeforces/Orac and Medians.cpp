#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forreverse(i,a,b) for(i=a;i>=b;i--)
#define full(x) x.begin(),x.end()
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

int main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	
	#ifndef ONLINE_JUDGE
	freopen("inputHR.txt","r",stdin);
    freopen("outputHR.txt","w",stdout);
	#endif

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif

	#ifndef ONLINE_JUDGE
	freopen("inputGFG.txt","r",stdin);
    freopen("outputGFG.txt","w",stdout);
	#endif
	*/
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t;
	cin>>t;
	go(t)
	{
		LL n,k,j;
		cin>>n>>k;
		LL A[n+4],i,cnt=0,b=0,cnt1;
		A[n]=-1;
		A[n+1]=-1;
		A[n+2]=-1;
		A[n+3]=-1;
        fori(i,0,n) cin>>A[i];
        cnt=count(A,A+n,k);
        if(cnt==0)
        {
        	cout<<"no\n";
        	continue;
        }
        else
        {
        	if(n==1) cout<<"yes\n";
	        else if(n>1)
	        {
	        	fori(i,0,n) if(A[i]>=k && (A[i+1]>=k || A[i+2]>=k)) b++;
        		if(b>0) cout<<"yes\n";
	        	else cout<<"no\n";
	        }
        }
	}
	return 0;
}