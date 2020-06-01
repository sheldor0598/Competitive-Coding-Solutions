#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
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
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	
	#ifndef ONLINE_JUDGE
	freopen("inputHR.txt","r",stdin);
    freopen("outputHR.txt","w",stdout);
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
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER NOW
	LL i,j,A[3][3],B[3][3];
	goflessthan(i,0,3)
		goflessthan(j,0,3)
			B[i][j]=1;
	goflessthan(i,0,3)
		goflessthan(j,0,3)
			cin>>A[i][j];
	goflessthan(i,0,3)
	{
		goflessthan(j,0,3)
		{
			if(A[i][j]%2==0)
				continue;
			else if((i+j)%2!=0 && j%2!=0)
			{
				if(B[i][j-1]==1) B[i][j-1]=0;
				else B[i][j-1]=1;
				if(B[i][j]==1) B[i][j]=0;
				else B[i][j]=1;
				if(B[i][j+1]==1) B[i][j+1]=0;
				else B[i][j+1]=1;
				if(B[1][1]==1) B[1][1]=0;
				else B[1][1]=1;
			}
			else if((i+j)%2!=0 && j%2==0)
			{
				if(B[i-1][j]==1) B[i-1][j]=0;
				else B[i-1][j]=1;
				if(B[i][j]==1) B[i][j]=0;
				else B[i][j]=1;
				if(B[i+1][j]==1) B[i+1][j]=0;
				else B[i+1][j]=1;
				if(B[1][1]==1) B[1][1]=0;
				else B[1][1]=1;
			}
			else if(i==0 & j==0)
			{
				if(B[i][j]==1) B[i][j]=0;
				else B[i][j]=1;
				if(B[i+1][j]==1) B[i+1][j]=0;
				else B[i+1][j]=1;
				if(B[i][j+1]==1) B[i][j+1]=0;
				else B[i][j+1]=1;
			}
			else if(i==0 & j==2)
			{
				if(B[i][j]==1) B[i][j]=0;
				else B[i][j]=1;
				if(B[i+1][j]==1) B[i+1][j]=0;
				else B[i+1][j]=1;
				if(B[i][j-1]==1) B[i][j-1]=0;
				else B[i][j-1]=1;
			}
			else if(i==2 & j==0)
			{
				if(B[i][j]==1) B[i][j]=0;
				else B[i][j]=1;
				if(B[i-1][j]==1) B[i-1][j]=0;
				else B[i-1][j]=1;
				if(B[i][j+1]==1) B[i][j+1]=0;
				else B[i][j+1]=1;
			}
			else if(i==2 & j==2)
			{
				if(B[i][j]==1) B[i][j]=0;
				else B[i][j]=1;
				if(B[i-1][j]==1) B[i-1][j]=0;
				else B[i-1][j]=1;
				if(B[i][j-1]==1) B[i][j-1]=0;
				else B[i][j-1]=1;
			}
			else if(i==1 & j==1)
			{
				if(B[i][j]==1) B[i][j]=0;
				else B[i][j]=1;
				if(B[i-1][j]==1) B[i-1][j]=0;
				else B[i-1][j]=1;
				if(B[i][j-1]==1) B[i][j-1]=0;
				else B[i][j-1]=1;
				if(B[i][j+1]==1) B[i][j+1]=0;
				else B[i][j+1]=1;
				if(B[i+1][j]==1) B[i+1][j]=0;
				else B[i+1][j]=1;
			}
		}
	}
	goflessthan(i,0,3)
	{
		goflessthan(j,0,3)
			cout<<B[i][j];
		endl;
	}
	return 0;
}