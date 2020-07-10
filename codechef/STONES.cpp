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
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		string s1,s2;
		LL n,m,i,cnt=0,p;
		cin>>s1;
		cin>>s2;
		n=s1.length();
		m=s2.length();
		char A[n+1];
		char B[m+1];
		strcpy(A,s1.c_str());
		strcpy(B,s2.c_str());
        for(i=0;i<m;i++)
        {
        	p=count(A,A+n,B[i]);
        	if(p>0) cnt++;
        }
        cout<<cnt<<"\n";
	}
	return 0;
}