#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define goflessthan(i,a,b) for(i=a;i<b;i++)
#define gofequalto(i,a,b) for(i=a;i<=b;i++)
#define gofminus(i,a,b) for(i=a;i>=b;i--)
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

LL summ(LL A[],LL j,LL prev)
{
    LL sum=0,i;
    for(i=prev;i<j;i++)
        sum=(sum+A[i])%M;
    //cout<<sum<<": ";
    return sum;
}
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
    freopen("inputHR.txt","r",stdin);
    freopen("outputHR.txt","w",stdout);
    #endif
    KILL HER
    LL n,m;
    cin>>n>>m;
    LL p=1,q=(n/m)-1,j=m,prev=0,sum=0,sum1;
    LL A[n],i;
    goflessthan(i,0,n)
        cin>>A[i];
    sort(A,A+n);
    while(q>0)
    {
        sum1=summ(A,j,prev);
        sum=(sum%M+(sum1 * p%M)%M)%M;
        prev=j;
        j+=m;
        p++;
        q--;
    }
    sum1=summ(A,n,prev);
    sum=(sum%M +(sum1 * p%M)%M)%M;
    cout<<sum<<" ";
    return 0;
}