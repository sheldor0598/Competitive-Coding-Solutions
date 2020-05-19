#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
#define go(t) while(t--)
#define take cin
#define in >>
#define give cout
#define out <<
#define endl "\n"
#define pb push_back
#define mp make_pair

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
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER
	LL t;
	take in t;
	go(t)
	{
		LL s,w1,w2,w3,temp,cnt;
		take in s in w1 in w2 in w3;
		if(w1>w3)
	    {
	        temp=w1;
	        w1=w3;
	        w3=temp;
	    }
	    if(w1==1 && w2==1 && w3==1)
	    {
	        if(s>=3)
	            cnt=1;
            else if(s==2)
                cnt=2;
            else
                cnt=3;
	    }
	    else if(w1==1 && w2==1 && w3==2)
	    {
	        if(s>=4)
	            cnt=1;
            else if(s==3 || s==2)
                cnt=2;
            else
                cnt=3;
	    }
	    else if(w1==1 && w2==2 && w3==1)
	    {
	        if(s>=4)
	            cnt=1;
            else if(s==3)
                cnt=2;
            else
                cnt=3;
	    }
	    else if((w1==1 && w2==2 && w3==2) || (w1==2 && w2==1 && w3==2))
	    {
	        if(s>=5)
	            cnt=1;
            else if(s==4 || s==3)
                cnt=2;
            else
                cnt=3;
	    }
	    else if(w1==2 && w2==2 && w3==2)
	    {
	        if(s>=6)
	            cnt=1;
            else if(s==5 || s==4)
                cnt=2;
            else
                cnt=3;
	    }
	    give out cnt out endl;
	}
	return 0;
}



