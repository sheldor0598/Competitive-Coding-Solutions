#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define FAST ios_base::sync_with_stdio(false);
#define INPT cin.tie(NULL);
#define OUTPT cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define full(x) x.begin(),x.end()
#define sortV(x) sort(full(x))
#define sortVgr(x) sort(full(x),greater<LL>()) // x -> vector
#define reverse(x) reverse(full(x)) // x -> string
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define M 1e9+7

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
	FAST INPT OUTPT
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,s,sum=0,k=0,p,q,a=1,d,h;
		string s1;
		cin>>s1;
		cin>>s;
		n=s1.length();
		LL A[n],i;
        fori(i,0,n) {A[i]=s1[i]-'0'; sum+=A[i];}
        //fori(i,0,n) cout<<A[i]; endl;
        if(sum<=s) {cout<<0<<"\n";continue;}
        i=0;
        while(k+A[i]<s)
        {
        	k+=A[i];
        	i++;
        }
        d=A[i];
        fori(h,i+1,n) d=d*10 + A[h];
        q=n-i;
        while(q>0)
        {
        	a*=10;
        	q--;
        }
        cout<<a-d<<"\n";
        //cout<<a<<" "<<d<<" "<<a-d<<"\n";
	}
	return 0;
}