#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
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
	string s;
	cin>>s;
	LL i,n,cnt=0,a,q,f,l;
	n=s.length();
	char A[n+1];
	strcpy(A,s.c_str());
	for(i=0;i<n;i++)
		if(A[i]=='Q')
		{
			f=i;
			break;
		}
	for(i=n-1;i>=0;i--)
		if(A[i]=='Q')
		{
			l=i;
			break;
		}
	a=count(A+f+1,A+l+1,'A');
	q=count(A+f+1,A+l+1,'Q');
	cnt+=a*q;
	cout<<cnt;
	return 0;
}