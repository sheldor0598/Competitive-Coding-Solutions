#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define foriless(i,a,b) for(i=a;i<b;i++)
#define foriequal(i,a,b) for(i=a;i<=b;i++)
#define forfromback(i,a,b) for(i=a;i>=b;i--)
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
		LL n,cnt=0,p,i=0,k=1,j;
		cin>>n;
		vector<LL>A;
		while(n>0)
		{
			k=1;
			p=n%10;
			for(j=0;j<i;j++) k*=10;
			A.pb(p*k);
			n/=10;
			i++;
		}
		foriless(i,0,A.size()) 
			if(A[i]!=0)
				cnt++;
		cout<<cnt<<"\n";
		foriless(i,0,A.size()) 
			if(A[i]!=0)
				cout<<A[i]<<" ";
		endl;
        
	}
	return 0;
}