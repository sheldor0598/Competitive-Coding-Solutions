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
	/*#ifndef ONLINE_JUDGE freopen("inputCF.txt","r",stdin);freopen("outputCF.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputHR.txt","r",stdin);freopen("outputHR.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputCC.txt","r",stdin);freopen("outputCC.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputGFG.txt","r",stdin);freopen("outputGFG.txt","w",stdout);
	#endif */
	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER NOW 
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,i,m,cnt=0;
		string s;
	    cin>>s;
	    n=s.length();
	    s+='@';
	    fori(i,0,n)
	    {
	        if(s[i]=='x' && s[i+1]=='y')
        	{
	        	s[i]='@';s[i+1]='@';
	        	cnt++;i++;
	        }
	        else if(s[i]=='y' && s[i+1]=='x') 
	        {
	        	s[i]='@';s[i+1]='@';
	        	cnt++;i++;
	        }
	    }
	    cout<<cnt<<"\n";
	}
	return 0;
}