#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define sortV(x) sort(x.begin(),x.end())
#define sortVgr(x) sort(x.begin(),x.end(),greater<LL>())
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
	//cin>>t;
	go(t)
	{
		LL n,i,cnt=0;
		string s;
		cin>>s;
		n=s.length();
		char A[n+1];
		strcpy(A,s.c_str());
		string s1="";
		fori(i,0,n)
		{
			if(A[i]=='h' && cnt==0) {s1+=A[i];cnt++;}
			else if(A[i]=='e' && cnt==1) {s1+=A[i];cnt++;}
			else if(A[i]=='i' && (cnt==2 || cnt==4)) {s1+=A[i];cnt++;}
			else if(A[i]=='d' && cnt==3) {s1+=A[i];cnt++;}
			if(cnt==5) break;
		}
		//cout<<s1<<"\n";
		if(s1=="heidi") cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}