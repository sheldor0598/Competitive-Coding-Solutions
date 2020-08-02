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
		char c;
		cin>>c;
		string s;
		cin>>s;
		LL n,i,j;
		n=s.length();
		char A[n+1];
		strcpy(A,s.c_str());
		string a,b,d;
		a="qwertyuiop";
		b="asdfghjkl;";
		d="zxcvbnm,./";
		LL n1=a.length(),n2=b.length(),n3=d.length();
		char B[n1+1],C[n2+1],D[n3+1];
		strcpy(B,a.c_str());
		strcpy(C,b.c_str());
		strcpy(D,d.c_str());
		//cout<<n2<<"\n";
		//fori(i,0,n2) cout<<C[i]<<" "; endl;
		fori(i,0,n)
		{
			LL p=0,q=0,r=0;
			p=count(B,B+n1,A[i]);
			q=count(C,C+n2,A[i]);
			r=count(D,D+n3,A[i]);

			if(p>0)
			{
				fori(j,0,n1)
				{
					if(B[j]==A[i])
					{
						if(c=='R') cout<<B[j-1];
						else if(c=='L') cout<<B[j+1];
						break;
					}
				}
			}
			else if(q>0)
			{
				fori(j,0,n2)
				{
					if(C[j]==A[i])
					{
						if(c=='R') cout<<C[j-1];
						else if(c=='L') cout<<C[j+1];
						break;
					}
				}
			}
			else if(r>0)
			{
				fori(j,0,n3)
				{
					if(D[j]==A[i])
					{
						if(c=='R') cout<<D[j-1];
						else if(c=='L') cout<<D[j+1];
						break;
					}
				}
			}
		}
	}
	return 0;
}