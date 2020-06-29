#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define full(x) x.begin(),x.end()
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

int main()
{
	/*
	#ifndef ONLINE_JUDGE				#ifndef ONLINE_JUDGE				#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);	freopen("inputCC.txt","r",stdin);	freopen("input.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);	freopen("outputCC.txt","w",stdout); freopen("output.txt","w",stdout);
	#endif 								#endif 								#endif

	#ifndef ONLINE_JUDGE				#ifndef ONLINE_JUDGE
	freopen("inputHR.txt","r",stdin);	freopen("inputGFG.txt","r",stdin);
    freopen("outputHR.txt","w",stdout); freopen("outputGFG.txt","w",stdout);
	#endif 								#endif
	*/
	
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,cnt=0;
		cin>>n;
		if(n==1) { cout<<0<<"\n"; continue; }
		else if(n%6==0)
		{
			while(n>1)
			{
				n/=6;
				cnt++;
				if(n==1) { cout<<cnt<<"\n"; break; }
				else if(n%6!=0)
				{
					n*=2;
					cnt++;
					if(n%6!=0) { cout<<-1<<"\n"; break; }
				}
			}
		}
        else if(n%3==0)
        {
        	while(n%6!=0)
        	{
        		n*=2;
        		cnt++;
        	}
        	while(n>1)
			{
				n/=6;
				cnt++;
				if(n==1) { cout<<cnt<<"\n"; break; }
				else if(n%6!=0)
				{
					n*=2;
					cnt++;
					if(n%6!=0) { cout<<-1<<"\n"; break; }
				}
			}
        }
        else cout<<-1<<"\n";
	}
	return 0;
}