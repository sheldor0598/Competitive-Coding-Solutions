#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
 
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
        LL n,k;
        cin>>n>>k;
        LL A[n],i;
        for(i=0;i<n;i++)
            cin>>A[i];
        sort(A,A+n);
        for(i=0;i<n;i++)
            cout<<A[i]<<" ";
        cout<<"\n";
    }
}