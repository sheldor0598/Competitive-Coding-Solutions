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
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,i,_1=0,_0=0,p;
		//cin>>n;
		string s;
		cin>>s;
		n=s.length();
		char A[n+1];
		strcpy(A,s.c_str());
		_1=count(A,A+n,'1');
		_0=count(A,A+n,'0');
        p=min(_0,_1);
        if(p%2!=0) cout<<"DA\n";
        else cout<<"NET\n";
	}
	return 0;
}