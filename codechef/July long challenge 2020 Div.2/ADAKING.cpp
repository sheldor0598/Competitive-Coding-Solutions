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
	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
	freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,i,j;
		cin>>n;
		char A[8][8];
		fori(i,0,8) fori(j,0,8) A[i][j]='X';
        fori(i,0,8)
        {
        	fori(j,0,8)
        	{
        		if(n>0) {A[i][j]='.';n--;}        		
        		if(n==0) break;
        	}
        	if(n==0) break;
        }
        A[0][0]='O';
        fori(i,0,8) {fori(j,0,8) cout<<A[i][j]; endl;}
        endl;
	}
	return 0;
}