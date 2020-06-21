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
		string s;
		cin>>s;
		LL n,n1,i,a,p,sum=0;
		cin>>n;
		n1=s.length();
		char A[n1+1];
		strcpy(A,s.c_str());
		LL Al[27];
        fori(i,1,27) cin>>Al[i];
        fori(i,0,n1)
        {
        	p=A[i]-'0' - 48;
        	sum+=(i+1)*Al[p];
        }
        sort(Al+1,Al+27);
        forireverse(i,n,1) sum+=((i+n1)*Al[26]);
        cout<<sum;
	}
	return 0;
}