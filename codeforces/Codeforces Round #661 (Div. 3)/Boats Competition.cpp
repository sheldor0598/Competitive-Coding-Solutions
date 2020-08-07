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

LL gcd(LL a, LL b)
{
	if(a==0) return b;
	else return gcd(b%a,a);
}

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
		LL n;
		cin>>n;
		LL A[n],i,j,k,sum,cnt;
        fori(i,0,n) cin>>A[i];
        sort(A,A+n);
        LL B[101],maxm=0,val;
        fori(i,2,101)
        {
        	cnt=0,sum=0;
        	j=0;k=n-1;
        	while(j<k)
        	{
        		sum=A[j]+A[k];
        		if(sum==i) {cnt++;j++;k--;}
        		else if(sum<i) j++;
        		else if(sum>i) k--;
        	}
        	B[i]=cnt;
        	if(cnt>maxm)
        	{
        		maxm=cnt;
        		val=i;
        	}
        }
        cout<<maxm<<"\n";
	}
	return 0;
}