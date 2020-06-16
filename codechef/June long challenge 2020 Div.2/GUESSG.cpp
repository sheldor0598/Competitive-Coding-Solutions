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
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("inputCF.txt","r",stdin);freopen("outputCF.txt","w",stdout); 
    #endif 
    #ifndef ONLINE_JUDGE 
    freopen("inputHR.txt","r",stdin);freopen("outputHR.txt","w",stdout);
	#endif 
	#ifndef ONLINE_JUDGE 
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	#endif 
	#ifndef ONLINE_JUDGE 
	freopen("inputCC.txt","r",stdin);freopen("outputCC.txt","w",stdout);
	#endif 
	#ifndef ONLINE_JUDGE 
	freopen("inputGFG.txt","r",stdin);freopen("outputGFG.txt","w",stdout);
	#endif 
	#ifndef ONLINE_JUDGE 
	freopen("inputCC.txt","r",stdin);freopen("outputCC.txt","w",stdout); 
	#endif
	KILL HER NOW 
	LL n,first,last,y;
	cin>>n;
	last=n;
	LL tr=1;while(tr--){} 
	first=1;
	LL prev;
	while(first<=last)
	{ 
		char ans1,ans2,ans3,ans4,ans5,ans6;
		cout<<1<<endl;
		cin>>ans1;
		if(ans1=='E') return 0;
		else if(ans1=='L') prev=0;
		else if(ans1=='G') prev=1;

		y=(first+last)/2;
		cout<<y<<endl; cin>>ans2;

		if(ans2=='E') return 0; 

		else if(prev==0)
		{ 
			if(ans2=='L') last=y-1;
			else if(ans2=='G') first=y+1;
			prev=1;
		}

		else if(prev==1)
		{
			cout<<y<<endl; cin>>ans3;

			if(ans2==ans3)
			{
				if(ans2=='L') last=y-1;
				else if(ans2=='G') first=y+1;	
			}
			else if(ans2!=ans3)
			{
				cout<<n<<endl; cin>>ans3;
				if(ans3=='E') return 0;	
			    else if(ans3=='G')
				{
				    cout<<y<<endl; cin>>ans4;
				    if(ans4=='L')
			    	{
						last=y-1;
						cout<<last<<endl; cin>>ans5;
						if(ans5=='E') return 0;		
					}
				    else if(ans4=='G')
			    	{
						first=y+1;	
						cout<<first<<endl; cin>>ans5;
						if(ans5=='E') return 0;		
					}
				    prev=0;
				}
				else if(ans3=='L')
				{
				    cout<<n<<endl; cin>>ans5;
				    if(ans5=='E') return 0;	
				    cout<<y<<endl; cin>>ans4;
				    if(ans5=='G')
				    {
				        if(ans4=='L')
    			    	{
    						last=y-1;
    						cout<<last<<endl; cin>>ans5;
    						if(ans5=='E') return 0;		
    					}
    				    else if(ans4=='G')
    			    	{
    						first=y+1;	
    						cout<<first<<endl; cin>>ans5;
    						if(ans5=='E') return 0;		
    					}
				    }
				    prev=1;
				}
			}
		}
	}
	return 0;
}