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
		LL a,k,p,minm,maxm,sum=0;
		cin>>a>>k;
		LL sum1,sum2,i,d;
		sum1=a;
		fori(i,2,k+1)
		{
			if(sum1%10==0) break;
			d=sum1;
			LL f=0;
			maxm=INT_MIN;
			minm=INT_MAX;
			while(d>0)
			{
				p=d%10;
				if(p==0)
				{
					f++;
					break;
				}
				minm=min(minm,p);
				maxm=max(maxm,p);
				d/=10;
			}
			if(f>0) break;
			sum2=sum1+(minm*maxm);
			sum1=sum2;
		}
		cout<<sum1<<"\n";
        
	}
	return 0;
}