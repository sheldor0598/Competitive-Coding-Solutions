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
	/*#ifndef ONLINE_JUDGE freopen("inputCF.txt","r",stdin);freopen("outputCF.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputHR.txt","r",stdin);freopen("outputHR.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputCC.txt","r",stdin);freopen("outputCC.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputGFG.txt","r",stdin);freopen("outputGFG.txt","w",stdout);
	#endif */
	#ifndef ONLINE_JUDGE 
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout); 
	#endif
	KILL HER NOW 
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,k,sum=0;
		cin>>n>>k;
	    LL A[n],i;
	    fori(i,0,n)
	    {
	        cin>>A[i];
	        if(A[i]>k) sum+=(A[i]-k);
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}