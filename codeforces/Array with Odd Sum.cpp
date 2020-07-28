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
	cin>>t;
	go(t)
	{
		LL n,sum=0,odd=0,even=0;
		cin>>n;
		LL A[n],i;
        fori(i,0,n)
        {
        	cin>>A[i];
        	if(A[i]%2==0) even++;
        	else odd++;
        	sum+=A[i];
        }
        if(sum%2!=0) {cout<<"YES\n";continue;}
        if(odd==0) {cout<<"NO\n";continue;}
        if(even==0)
        {
        	if(odd%2==0) {cout<<"NO\n";continue;}
        	else {cout<<"YES\n";continue;}
        }
        cout<<"YES\n";
	}
	return 0;
}