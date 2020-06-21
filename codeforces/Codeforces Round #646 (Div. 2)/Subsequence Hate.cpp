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

const LL d=1e4+500;
LL A[d];
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
		string s;
		cin>>s;
		LL i,j,k=0,n;
		n=s.length();
		fori(i,0,n)
		{
			A[i+1]=A[i];
			if(s[i]=='1') A[i+1]++;
		}
		fori(i,0,n)
		{
			fori(j,i+1,n+1)
			{
				k=max(k,A[j]-2*A[i]+i);
				k=max(k,j-i-A[j]+2*A[i]);
			}
		}
		fori(i,0,n+1) A[i]=0;
		cout<<n-k;
		endl;
	}
	return 0;
}
