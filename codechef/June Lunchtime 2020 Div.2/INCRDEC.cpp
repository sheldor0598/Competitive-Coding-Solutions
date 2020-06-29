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
		LL n;
		cin>>n;
		LL A[n],B[n],i,b=0,z=n-1,x=0;
        fori(i,0,n) cin>>A[i];
        sort(A,A+n);
    	fori(i,0,n)
    	{
    		if(i%2==0)
			{
				B[x]=A[i];
				x++;
			}
    		else
    		{
    			B[z]=A[i];
    			z--;
    		}
    	}
    	//fori(i,0,n) cout<<B[i]<<" ";
    	//endl;
    	fori(i,1,n)
    	{
    		if(B[i]==B[i-1])
    		{
    			b++;
    			break;
    		}
    	}
    	if(b>0) cout<<"NO\n";
        else
       	{
       		cout<<"YES\n";
       		fori(i,0,n) cout<<B[i]<<" ";
       		endl;
       	}  
	}
	return 0;
}