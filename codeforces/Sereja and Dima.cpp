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
#define pf push_front
#define pob pop_back
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
		LL n,suma=0,sumb=0,k=1,a,b;
		cin>>n;
		LL A[n],i;
		deque<LL> dq;
        fori(i,0,n) {cin>>A[i];dq.pb(A[i]);}
        //for(LL v:dq) cout<<v<<" ";endl;
        while(dq.front()!=dq.back())
        {
        	a=dq.front();
        	b=dq.back();
        	if(k%2!=0) suma+=max(a,b);
        	else sumb+=max(a,b);
        	if(a>b) dq.pof();
    		else dq.pob();
    		k++;
        }
        if(n%2!=0) suma+=dq.front();
        else sumb+=dq.front();
        cout<<suma<<" "<<sumb;

	}
	return 0;
}