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
#define pf push_front
#define pof pop_front
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
		LL n,a,sum;
		cin>>n;
        while(n>0)
        {
        	a=n;
        	sum=0;
        	while(a>0)
        	{
        		sum+=a%10;
        		a/=10;
        	}
        	if(sum%4==0)
        	{
        		cout<<n;
        		break;
        	}
        	n++;
        }
	}
	return 0;
}