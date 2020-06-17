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
	freopen("inputCF.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	go(t)
	{
		LL d,sum,sum1=0;
		cin>>d>>sum;
		LL A[d],min[d],max[d],i;
        fori(i,0,d)
        {
        	cin>>min[i]>>max[i];
        	A[i]=min[i];
        	sum1+=min[i];
        }
        if(sum1<sum) 
    	{ 
    		fori(i,0,d) 
    		{
    			while(sum1<sum && A[i]<max[i])
    			{
    				A[i]++; 
    				sum1++;
    			}
    		}
    		if(sum1==sum) { cout<<"YES\n"; fori(i,0,d) cout<<A[i]<<" "; }
    		else cout<<"NO\n";
    	}
    	else if(sum1==sum) { cout<<"YES\n"; fori(i,0,d) cout<<A[i]<<" "; }
    	else cout<<"NO\n";
	}
	return 0;
}