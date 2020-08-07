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
		LL n,i;
		cin>>n;
		string s;
		cin>>s;
		char A[n+1];
		strcpy(A,s.c_str());
		vector<LL> B;
		stack<LL> zero;
		stack<LL> one;
		LL a,b;
		a=count(A,A+n,'0');
		b=count(A,A+n,'1');				
		if(a==n || b==n) 
		{
			cout<<n<<"\n";
			fori(i,0,n) cout<<i+1<<" ";endl;
			continue;
		}
		B.pb(1);
		if(A[0]=='0') zero.push(1);
		else one.push(1);
		LL p=1,p1;
		fori(i,1,n)
		{		
			if(A[i]=='0')
			{
				if(!one.empty())
				{
					p1=one.top();
					B.pb(p1);
					zero.push(p1);
					one.pop();
				}
				else if(one.empty())
				{
					p++;
					B.pb(p);
					zero.push(p);
				}
			}
			else if(A[i]=='1')
			{
				if(!zero.empty())
				{
					p1=zero.top();
					B.pb(p1);
					one.push(p1);
					zero.pop();
				}
				else if(zero.empty())
				{
					p++;
					B.pb(p);
					one.push(p);
				}
			}
		}
		cout<<*max_element(B.begin(),B.end())<<"\n";
		fori(i,0,B.size()) cout<<B[i]<<" ";endl;
	}
	return 0;
}