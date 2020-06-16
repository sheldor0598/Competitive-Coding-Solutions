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
	/*#ifndef ONLINE_JUDGE freopen("inputCF.txt","r",stdin);freopen("outputCF.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputHR.txt","r",stdin);freopen("outputHR.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputCC.txt","r",stdin);freopen("outputCC.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputGFG.txt","r",stdin);freopen("outputGFG.txt","w",stdout);
	#endif */
	#ifndef ONLINE_JUDGE 
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout); 
	#endif
	KILL HER NOW 
	LL t=1;
	cin>>t;
	go(t)
	{ 
		LL n,c5=0,c10=0,p=0;
	    cin>>n;
	    LL A[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    fori(i,0,n)
	    {
	        if(i==0 && A[i]>5)
	        {
	            p++;
	            break;
	        }
	        else if(A[i]==5)
	        {
	            c5++;
	            continue;
	        }
	        else if(A[i]==10)
	        {
	            if(c5==0)
	            {
	                p++;
	                break;
	            }
	            else
	            {
	                c5--;
	                c10++;
	                continue;
	            }
	        }
	        else if(A[i]==15)
	        {
	            if(c10==0 && c5<2)
	            {
	                p++;
	                break;
	            }
	            else
	            {
	                if(c10>0) c10--;
	                else c5-=2;
	            }
	        }
	    }
	    if(p>0) cout<<"NO\n";
	    else cout<<"YES\n"; 
	}
	return 0;
}

