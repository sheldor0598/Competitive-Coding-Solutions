#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
#define go(t) while(t--)
#define pb push_back
#define mp make_pair

int main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
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
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER
	LL t;
	cin>>t;
	go(t)
	{
		LL A[5],i,cnt=0;
        goflessthan(i,0,5)
            cin>>A[i];
        cnt=count(A,A+5,1);
        if(cnt==0)
        	cout<<"Beginner\n";
        else if(cnt==1)
        	cout<<"Junior Developer\n";
        else if(cnt==2)
        	cout<<"Middle Developer\n";
        else if(cnt==3)
        	cout<<"Senior Developer\n";
        else if(cnt==4)
        	cout<<"Hacker\n";
        else if(cnt==5)
        	cout<<"Jeff Dean\n";
	}
	return 0;
}
