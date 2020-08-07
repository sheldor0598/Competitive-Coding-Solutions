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
		LL n,minm,cnt=0;
		cin>>n;
		LL A[n],B[n],i,min1,min2;
        fori(i,0,n) cin>>A[i];
        fori(i,0,n) cin>>B[i];
        min1=*min_element(A,A+n);
        min2=*min_element(B,B+n);
        fori(i,0,n)
        {
        	minm=0;
        	if(A[i]>min1 && B[i]>min2)
        	{
        		minm=min((A[i]-min1),(B[i]-min2));
        		cnt+=minm;
        		A[i]-=minm;
        		B[i]-=minm;
        	}
        	else if(A[i]>min1)
        	{
        		minm=A[i]-min1;
        		A[i]-=minm;
        		cnt+=minm;
        	}
        	else if(B[i]>min2)
        	{
        		minm=B[i]-min2;
        		B[i]-=minm;
        		cnt+=minm;
        	}
        }
        fori(i,0,n)
        {
        	cnt+=abs(A[i]-min1);
        	cnt+=abs(B[i]-min2);
        }
        cout<<cnt<<"\n";
	}
	return 0;
}