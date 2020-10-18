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
		LL n;
		cin>>n;
		LL i,j,k,cnt;
		char A[n+1][n+1];
        fori(i,1,n+1) fori(j,1,n+1) cin>>A[i][j];
        LL a,b,c,d;
        a=A[1][2]-'0',b=A[2][1]-'0',c=A[n-1][n]-'0',d=A[n][n-1]-'0';
        if((a==b && c==d && a==0 && c==1) || (a==b && c==d && a==1 && c==0)) cout<<0<<"\n";
        else if(a==b && c==d && b==c)
        {
        	cout<<2<<"\n"; 
    		cout<<"1 2\n"<<"2 1\n";
        }
        else if(a==b && c!=d)
        {
        	cout<<1<<"\n"; 
        	if(a==c) cout<<n-1<<" "<<n<<"\n";
        	else cout<<n<<" "<<n-1<<"\n";
        }
        else if(c==d && a!=b)
        {
        	cout<<1<<"\n"; 
        	if(a==c) cout<<"1 2\n";
        	else cout<<"2 1\n";
        }
        else if(c!=d && a!=b)
        {
        	cout<<2<<"\n"; 
        	if(c==a || b==d)
        	{
        		cout<<"1 2\n";
        		cout<<n<<" "<<n-1<<"\n";
        	}
        	else if(a==d && b==c)
        	{
        		cout<<"1 2\n";
        		cout<<n-1<<" "<<n<<"\n";
        	}
        }
        
	}
	return 0;
}