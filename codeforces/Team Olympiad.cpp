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
		LL n;
		cin>>n;
		LL A[n+1],i,a=0,b=0,c=0;
		vector<LL> A1;
		vector<LL> B;
		vector<LL> C;
        fori(i,1,n+1)
        {
        	cin>>A[i];
        	if(A[i]==1)
        	{
        		a++;
        		A1.pb(i);
        	}
        	else if(A[i]==2)
        	{
        		b++;
        		B.pb(i);
        	}
        	else if(A[i]==3)
        	{
        		c++;
        		C.pb(i);
        	}
        }
        if(a==0 || b==0 || c==0) cout<<0;
        else 
        {
        	LL n1=min(min(a,b),c);
        	cout<<n1<<"\n";
        	fori(i,0,n1) cout<<A1[i]<<" "<<B[i]<<" "<<C[i]<<"\n";    
        }
	}
	return 0;
}