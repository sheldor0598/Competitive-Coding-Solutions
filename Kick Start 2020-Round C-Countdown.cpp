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
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t,i,j,k,p,cnt;
	cin>>t;
	fori(j,1,t+1)
	{
		LL n,k,h;
		cin>>n>>k;
		LL A[n],i,count=0;
        fori(i,0,n) cin>>A[i];
        fori(i,0,n-1)
        {
        	if(A[i]==k)
        	{
        		//cout<<A[i]<<"#\n";
        		p=0;
        		cnt=0;
        		fori(h,i,n)
	        	{
	        		if(A[h] == k-p)
        			{
        				//cout<<A[h]<<" ";
        				cnt++;
        			}
	        		else break;
	        		p++;
	        	}
	        	if(cnt==k) count++;
	        	//cout<<"\n"<<count<<"\n";
        	}
        }
        cout<<"Case #"<<j<<": "<<count<<"\n";
	}
	return 0;
}