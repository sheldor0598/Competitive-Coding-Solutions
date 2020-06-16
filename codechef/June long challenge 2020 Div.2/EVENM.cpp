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

int main() //add all ifndef
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
		LL n,a=2;
	    cin>>n;
	    LL M[n+1][n+1],i,j,p=-1;
	    fori(i,1,n+1) 
	    	fori(j,1,n+1) 
	    		M[i][j]=0;
	    M[1][1]=1;
	    LL R[n+1],C[n+1];
	    R[1]=1,R[2]=2;C[1]=1;C[2]=4;M[2][1]=C[2];
	    fori(i,3,n+1)
	    {
	        a+=2;
	        R[i]=R[i-1]+a-1;
	        C[i]=C[i-1]+a+1;
	    }
	    fori(i,1,n+1) { M[1][i]=R[i]; }
	    fori(i,2,n+1) { M[i][1]=C[i]; }
	    fori(i,2,n+1)
	    {
	        fori(j,2,n+1)
	        {
	            if(j<=i) M[i][j]=M[i][j-1]-1;
	            else M[i][j]=M[i][j-1]+(R[j]-R[j-1]);
	        }
	    }
	    fori(i,1,n+1)
	    {
	        fori(j,1,n+1) cout<<M[i][j]<<" "; 
	        cout<<"\n";
	    }
	    
	}
	return 0;
}