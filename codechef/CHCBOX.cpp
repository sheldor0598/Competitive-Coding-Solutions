#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define mp make_pair

int main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
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
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER
	LL t;
	cin>>t;
	go(t)
	{
		LL n,a,cnt;
		cin>>n;
		vector<LL> A;
		LL i,pos1,pos2,nl,maxm;
        goflessthan(i,0,n)
        {
        	cin>>a;
        	A.pb(a);
        }
        maxm=*max_element(A.begin(),A.end());
        cnt=count(A.begin(),A.end(),maxm);
        goflessthan(i,0,A.size())
	        if(A[i]==maxm)
        	{
        		pos1=i;
        		break;
        	}
        for(i=n-1;i>=0;i--)
	        if(A[i]==maxm)
	        {
	            pos2=i;
	            break;
	        }
    	if(n/2 - (pos2-pos1) >=0) cout<<n/2 - (pos2-pos1);
    	else cout<<0;
        endl;
	}
	return 0;
}