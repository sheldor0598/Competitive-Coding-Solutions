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

/*LL gcd(LL a, LL b)
{
	if(a==0) return b;
	else return gcd(b%a,a);
}

struct Interval 
{ 
    LL start, end; 
}; 
  
bool compareInterval(Interval i1, Interval i2) 
{ 
    return (i1.start < i2.start); 
} */

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
		LL n,i,j,cnt;
		string s;
		cin>>s;
		n=s.length();
		char A[n+1];
		strcpy(A,s.c_str());	
		vector<LL> V;	
        fori(i,0,n)
        {
        	cnt=0;
        	if(A[i]=='1')
        	{
        		cnt++;
        		fori(j,i+1,n)
        		{
        			if(A[j]=='1') cnt++;
        			else break;
        		}
        		V.pb(cnt);
        		i=j;
        	}
        }
        sortVgr(V);
        cnt=0;
        for(i=0;i<V.size();i+=2) cnt+=V[i];
        cout<<cnt<<"\n";
	}
	return 0;
}