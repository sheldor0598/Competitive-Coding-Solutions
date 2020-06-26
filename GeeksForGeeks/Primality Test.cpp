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

bool isPrime(int N)
{
    if(N==2 || N==3) return 1;
    else if(N==1) return 0;
    for(int i=2;i<=sqrt(N);i++) if(N%i==0) return 0;
    return 1;
}

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
	freopen("inputGFG.txt","r",stdin);
	freopen("outputGFG.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n;
		cin>>n;
		if(isPrime(n)) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}