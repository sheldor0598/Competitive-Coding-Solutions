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
#define pob pop_back
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
	freopen("inputGFG.txt","r",stdin);
    freopen("outputGFG.txt","w",stdout);
	#endif
	KILL HER
	LL t;
	cin>>t;
	go(t)
	{
	    string s1,s2;
	    cin>>s1>>s2;
		LL n1,n2,i,j;
		n1=s1.length();
		n2=s2.length();
		LL A[n1],B[n2];
		set<char> s;
		s.clear();
        goflessthan(i,0,n1) A[i]=s1[i]-'0';
        goflessthan(i,0,n2) B[i]=s2[i]-'0';
        /*goflessthan(i,0,n1) cout<<A[i]<<" ";
        endl;
        goflessthan(i,0,n2) cout<<B[i]<<" ";
        endl;*/
        goflessthan(i,0,n1)
        {
            goflessthan(j,0,n2)
            {
                if(A[i]==B[j])
                {
                    //cout<<A[i]<<" ";
                    s.insert(A[i]+'0');
                    break;
                }
            }
        }
        if(s.size()==0) cout<<"nil";
        for(auto x:s)
            cout<<x;
        endl;
        
	}
	return 0;
}