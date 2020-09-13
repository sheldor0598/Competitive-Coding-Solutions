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
		LL n,cnt,d;
		cin>>n;
		LL A[n],i;
		LL B[101]={0};
		vector<LL> V1,V2;
        fori(i,0,n) {cin>>A[i];B[A[i]]++;}
        //fori(i,0,6) cout<<B[i]<<" ";endl;
        fori(i,0,101)
        {
        	if(B[i]==0) continue;
        	cnt=B[i]/2;
        	d=B[i]-cnt;
        	while(cnt>0)
        	{
        		V1.pb(i);
        		cnt--;
        	}
        	while(d>0)
        	{
        		V2.pb(i);
        		d--;
        	}
        }
        sortV(V1);
        sortV(V2);
        LL a=V1.size();
        LL b=V2.size();
        LL sum=0,p;
        /*fori(i,0,a) cout<<V1[i]<<" ";
        endl;
        fori(i,0,b) cout<<V2[i]<<" ";
        endl;*/
        fori(i,0,101)
        {
        	p=count(full(V1),i);
        	if(p==0)
        	{
        		sum+=i;
        		break;
        	}
        }
        fori(i,0,101)
        {
        	p=count(full(V2),i);
        	if(p==0)
        	{
        		sum+=i;
        		break;
        	}
        }
        cout<<sum<<"\n";
	}
	return 0;
}