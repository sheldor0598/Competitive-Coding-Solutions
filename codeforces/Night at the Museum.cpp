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
		LL n,d,sum=0,d1,d2;
		string s;
		cin>>s;
		n=s.length();
		LL A[26],i;
		A[0]=0;
        fori(i,1,13)
        {
        	A[i]=i;
        	A[26-i]=-i;
        }
        A[13]=13;
        char B[n+1];
        LL C[n];
        strcpy(B,s.c_str());
        fori(i,0,n) 
        {
        	d=B[i]-'0';
        	C[i]=A[d-49];
        }
        sum+=abs(C[0]);
        //fori(i,0,n) cout<<C[i]<<" ";endl;
        d1=B[0]-'0';
        d1-=49;
        fori(i,1,n)
        {
        	d2=B[i]-'0';
        	d2-=49;
        	if(abs(d2-d1)>=13)
        	{
        		if(C[i]*C[i-1] >= 0) sum+=abs(C[i-1]-C[i]);
        		else if(C[i]<0) sum+=abs(C[i-1]-C[i]);
        		else if(C[i-1]<0) sum+=abs(C[i]-C[i-1]);
        	}
        	else sum+=(abs(d2-d1));
        	d1=d2;
        }
        cout<<sum;
	}
	return 0;
}