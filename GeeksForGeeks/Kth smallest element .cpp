#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
#define go(i,a,b) for(i=a;i<b;i++)
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inputGFG.txt","r",stdin);
    freopen("outputGFG.txt","w",stdout);
    #endif

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--)
    {
        LL n;
        cin>>n;
        LL A[n],i;
        go(i,0,n)
            cin>>A[i];
        LL k;
        cin>>k;
        sort(A,A+n);
        cout<<A[k-1]<<"\n";
    }
}