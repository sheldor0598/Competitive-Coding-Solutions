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
    LL t;
    cin>>t;
    go(t)
    {
        LL n,m,b,a,cnt=0;
        cin>>n>>m;
        LL i;
        vector<bool> A(n+1,true);
        vector<LL> B;
        A[2]=false;
        while(m--)
        {
            cin>>a>>b;
            if(A[a]==false) A[b]=false;
            else if(A[b]==false) A[a]=false;
            else if(a==1) B.pb(b);
            else if(b==1) B.pb(a);

        }
        LL p=B.size();
        sort(B.begin(),B.end());
        goflessthan(i,0,p)
        {
            if(A[B[i]]==true)
            {
                cout<<B[i]<<" ";
                cnt++;
            }
        }
        if(cnt==0) cout<<-1;
        endl;  
    }
    return 0;
}