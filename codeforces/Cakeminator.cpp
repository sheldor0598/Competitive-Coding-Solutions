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
	go(t)
	{
		LL r,c,i,j,cnt=0,b;
		cin>>r>>c;
		char A[r][c];
        fori(i,0,r) fori(j,0,c) cin>>A[i][j];
        fori(i,0,r)
        {
        	b=0;
        	fori(j,0,c) if(A[i][j]=='S') { b=1;break; }

        	if(b==1) continue;
        	fori(j,0,c) if(A[i][j]=='.') { cnt++; A[i][j]='@'; }
        }
        fori(j,0,c)
        {
        	b=0;
        	fori(i,0,r) if(A[i][j]=='S') { b=1;break; }

        	if(b==1) continue;
        	fori(i,0,r) if(A[i][j]=='.') { cnt++; A[i][j]='@'; }
        }
        cout<<cnt;
	}
	return 0;
}