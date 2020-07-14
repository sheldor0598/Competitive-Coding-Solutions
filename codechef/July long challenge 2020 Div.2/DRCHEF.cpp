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
        LL n,x,i,a,n1,j,p,q,cnt=0;
        cin>>n>>x;
        vector<LL> A;
        vector<LL> B;
        A.pb(x);
        fori(i,0,n)
        {
            cin>>a;
            A.pb(a);
        }
        n1=A.size();
        sort(full(A));
        LL maxm=A[n1-1];
        if(x>=maxm) { cout<<n<<"\n";continue; }

        fori(i,0,n1) if(A[i]==x) break;
        cnt=i;
        if(i-1>=0 && A[i-1]*2>=A[i]) {B.pb(A[i-1]); cnt--;}
        fori(j,i+1,n1) B.pb(A[j]);
        n1=B.size();
        
        fori(i,0,n1)
        {
            while(x<B[i]) { cnt++;x*=2; }
            x=B[i]*2;
            cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
