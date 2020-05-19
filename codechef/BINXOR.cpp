#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define gof1(i,a,b) for(i=a;i<b;i++)
#define gof2(i,a,b) for(i=a;i<=b;i++)
#define gof3(i,a,b) for(i=a;i<b;i+=2)
#define go(t) while(t--)
#define take cin
#define in >>
#define give cout
#define out <<
#define endl "\n"
const int N = 1000001;
unsigned long long int I_HATE_MOD=10e8+7;
LL factninv[N+1];
LL naturalninv[N+1];
LL fact1[N+1];
void inversen(LL I_HATE_MOD) 
{ 
	LL i;
    naturalninv[0] = naturalninv[1] = 1; 
    gof2(i,2,N) 
        naturalninv[i] = naturalninv[I_HATE_MOD % i] * (I_HATE_MOD - I_HATE_MOD / i) %I_HATE_MOD; 
} 
void inversefact(LL I_HATE_MOD) 
{ 
	LL i;
    factninv[0] = 1;
    factninv[1] = 1;
    gof2(i,2,N)
        factninv[i]=(naturalninv[i] * factninv[i - 1]) %I_HATE_MOD;
} 
void fact(LL I_HATE_MOD)
{ 
	LL i;
    fact1[0]=1;
    gof2(i,1,N) 
	    fact1[i]=(fact1[i - 1] * i) %I_HATE_MOD; 
} 
 
LL bino(LL N,LL r,LL I_HATE_MOD)
{  
    LL value = ((fact1[N] * factninv[r]) %I_HATE_MOD * factninv[N - r]) %I_HATE_MOD; 
    return value;
} 
int main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif

	#ifndef ONLINE_JUDGE
	freopen("inputGFG.txt","r",stdin);
    freopen("outputGFG.txt","w",stdout);
	#endif
	*/
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	KILL HER
	LL t;
	take in t;
	inversen(I_HATE_MOD); 
    inversefact(I_HATE_MOD); 
    fact(I_HATE_MOD);
	go(t)
	{
		LL n,na,nb,cnt=0,minm=0,maxm=0,d,i;
		take in n;
		string s1,s2;
		take in s1 in s2;
		na=0,nb=0;
		gof1(i,0,n)
		{
		    if(s1[i]=='1')
		        na++;
	        if(s2[i]=='1')
	            nb++;
		}
		minm=abs(na-nb);
		if((na+nb)>n)
			maxm=(2*n-na-nb);
		else
			maxm=(na+nb);
		gof1(i,minm,maxm+1)
		{
			d=bino(n,i,I_HATE_MOD);
			cnt=(cnt+d)%I_HATE_MOD;
			i++;
		}
		give out cnt out endl;
    }
	return 0;
}
