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
	/*
	#ifndef ONLINE_JUDGE				#ifndef ONLINE_JUDGE				#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);	freopen("inputCC.txt","r",stdin);	freopen("input.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);	freopen("outputCC.txt","w",stdout); freopen("output.txt","w",stdout);
	#endif 								#endif 								#endif

	#ifndef ONLINE_JUDGE				#ifndef ONLINE_JUDGE
	freopen("inputHR.txt","r",stdin);	freopen("inputGFG.txt","r",stdin);
    freopen("outputHR.txt","w",stdout); freopen("outputGFG.txt","w",stdout);
	#endif 								#endif
	*/
	
	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,b,m;
		cin>>n>>b>>m;
		LL A[m],i;
        fori(i,0,m) cin>>A[i];
        LL cnt=0,cache=-1,k;
        fori(i,0,m)
        {
        	k=A[i]/b;
        	if(k!=cache) cnt++;
        	cache=k;
        }
        cout<<cnt<<"\n";
	}
	return 0;
}