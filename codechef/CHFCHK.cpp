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
		LL n,diff;
		cin>>n;
		LL A[n],i,j,p;
		vector<LL> B;
        goflessthan(i,0,n)
        	cin>>A[i];
    	sort(A,A+n);
    	cout<<A[0]<<"\n";
    	/*p=A[n-1];
    	bool C[p+1];
    	memset(C,true,sizeof(C));
    	for(i=0;i<n;i++)
    	{
    		if(C[A[i]]==false) continue;
    		else 
			{
				B.pb(A[i]);
	    		for(j=(A[i]*A[i]);j<=p;j+=A[i])
	    		{
	    			if(j%A[i]==0 && C[j]==true)
	    			{
	    				B.pb(j);
	    				//cout<<C[j]<<':';
						C[j]=false;
						//cout<<j<<":"<<C[j]<<" ";
					}
	    		}
	    	}
	    	//endl;
    	}
    	//cout<<B.size()<<"\n";

    	sort(B.begin(),B.end());
    	diff=B[0];
        cout<<diff<<"\n";*/
	}
	return 0;
}