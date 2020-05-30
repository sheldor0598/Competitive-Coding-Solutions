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
	LL n,i,j;
	string A;
	cin>>A;
	A="@@"+A;
	//cout<<A<<"\n";
	n=A.length();
	char s[n+1];
	strcpy(s,A.c_str());
	int B[n+1];
	j=0;
	goflessthan(i,2,n)
	{
		//cout<<s[i]<<"\n";
		if(s[i]=='-' && s[i+1]=='-')
		{
			B[j]=2;
			j++;
			i++;
		}
		/*else if(s[i]=='.' && s[i-1]=='-' && s[i-2]!='-')
		{
			B[j]=1;
			j++;
		}*/
		else if(s[i]=='-' && s[i+1]=='.')
		{
			B[j]=1;
			j++;
			i++;
		}
		else
		{
			B[j]=0;
			j++;
		}
	}
	//cout<<j<<"\n";
	goflessthan(i,0,j) cout<<B[i];
	return 0;
}