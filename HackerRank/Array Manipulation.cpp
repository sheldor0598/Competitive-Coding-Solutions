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
    KILL HER NOW
    LL t=1;
    //cin>>t;
    go(t)
    {
        LL n,m,a,b,k,i;
        cin>>n>>m;
        vector<LL> A(n+1,0);
        while(m--)
        {
            cin>>a>>b>>k;
            A[a]+=k;
            if(b+1<=n) A[b+1]-=k;
            //else if(b==n) A[b]-=k;
        }
        fori(i,1,n+1) A[i]+=A[i-1];
        //fori(i,1,n+1) cout<<A[i]<<" ";
        sort(A.begin(),A.end());
        cout<<A[n];
    }
    return 0;
}