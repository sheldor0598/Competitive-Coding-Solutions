#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define gof(i,a,b) for(i=a;i<b;i++)
#define got(t) while(t--)
#define take cin
#define in >>
#define give cout
#define out <<
#define nextline give out "\n"

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inputGFG.txt","r",stdin);
    freopen("outputGFG.txt","w",stdout);
    #endif
    
    KILL HER
    LL t;
    take in t;
    got(t)
    {
        LL n,k;
        take in n in k;
        LL A[n+k],i,j;
        gof(i,0,n)
            take in A[i];
        gof(j,0,k)
            A[n+j]=A[j];
        gof(i,k,n+k)
            give out A[i] out " ";
        nextline;
    }
    return 0;
}