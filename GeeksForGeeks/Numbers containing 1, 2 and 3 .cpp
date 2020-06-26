#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
#define go(t) while(t--)
#define endl cout<<"\n"
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
	
	KILL HER
	LL t;
	cin>>t;
	go(t)
	{
		LL n,p,c,d=0,q;
		cin>>n;
		LL A[n],i;
		vector<LL> B;
        goflessthan(i,0,n)
        {
            cin>>A[i];
            p=A[i];
            c=0;
            while(p>0)
            {
                q=p%10;
                p/=10;
                if(q==1 ||q==2 || q==3) continue;
                else { c++;break;}
            }
            if(c>0 || A[i]==0) d++;
            else B.pb(A[i]);
        }
        if(d==n) cout<<-1;
        else
        {
            sort(B.begin(),B.end());
            goflessthan(i,0,B.size()) cout<<B[i]<<" ";
        }
        endl;
        
	}
	return 0;
}