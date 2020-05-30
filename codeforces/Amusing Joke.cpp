#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
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
	LL A[26],B[26],i,n,n1;
	fill(A,A+26,0);
	fill(B,B+26,0);
	string a,b,c,s;
	cin>>a>>b>>c;
	s=a+b;
	n=s.length();
	goflessthan(i,0,n)
		A[(s[i]-65)]++;
	n1=c.length();
	if(n!=n1) cout<<"NO";
	else
	{
		goflessthan(i,0,n)
			B[(c[i]-65)]++;
		goflessthan(i,0,26)
			if(A[i]!=B[i])
				break;
		if(i!=26) cout<<"NO\n";
		//goflessthan(i,0,26) cout<<A[i]<<" "<<B[i]<<"\n";
		else cout<<"YES";
	}
	endl;
	return 0;
}