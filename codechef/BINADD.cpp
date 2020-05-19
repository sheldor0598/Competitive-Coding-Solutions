#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define gof1(i,a,b) for(i=a;i<b;i++)
#define gof2(i,a,b) for(i=a;i<=b;i++)
#define go(t) while(t--)
#define take cin
#define in >>
#define give cout
#define out <<
#define endl "\n"

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
	go(t)
	{
		LL n1,n2,i,cnt0=0;
		string s1,s2,s3;
		take in s1 in s2;
		n1=s1.length();
		n2=s2.length();
		gof1(i,0,n2)
		{
			if(s2[i]=='0')
				cnt0++;
		}
		if(cnt0==n2)
		{
			give out 0 out endl;
			continue;
		}
		gof1(i,0,n1/2)
        	swap(s1[i],s1[n1-i-1]);
        gof1(i,0,n2/2)
        	swap(s2[i],s2[n2-i-1]);
        LL p=max(n1,n2);
        gof1(i,n1,p)
        	s1=s1+'0';
    	gof1(i,n2,p)
        	s2=s2+'0';
        LL max_value=0,cnt=0;
        gof1(i,0,p)
        {
        	if(s1[i]=='1' && s2[i]=='1')
        	{
        		if(cnt>=max_value)
        			max_value=cnt;
    			cnt=1;
        	}	
	        else if(s1[i]=='0' && s2[i]=='0')
		    {
		    	if(cnt>=max_value)
        			max_value=cnt;
    			cnt=0;
    		}
		    else if(cnt>0)
		    	cnt++;
        }
        if(cnt>=max_value)
			max_value=cnt;
        give out (max_value + 1) out endl;
    }
	return 0;
}
