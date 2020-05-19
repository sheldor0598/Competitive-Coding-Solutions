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
	LL n,n1,i;
	string s,w;
	cin>>s;
	n1=s.length();
	char S[n1+1];
	strcpy(S,s.c_str());
	/*goflessthan(i,0,n1)
			cout<<S[i]<<" ";
	cout<<"\n";*/
	cin>>n;
    go(n)
    {
    	LL cnt=0,p,n2;
    	cin>>w;
    	n2=w.length();
    	char W[n2+1];
		strcpy(W,w.c_str());
		/*goflessthan(i,0,n2)
			cout<<W[i]<<" ";*/
    	goflessthan(i,0,n2)
    	{
    		p=count(S,S+n1+1,W[i]);
    		if(p==0)
    		{
    			cnt++;
    			break;
    		}
    	}
    	if(cnt>0)
    		cout<<"No"<<"\n";
    	else
    		cout<<"Yes"<<"\n";
    }
	return 0;
}
