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
        LL n,cnt=0,p=0,a,b,c,d,j,sum=0,k,count1=0,minm,cnt1,q;
        cin>>n;
        LL A[n+1],B[n+1],i;
        unordered_map<LL,LL> mp1;
        unordered_map<LL,LL> mp2;
        fori(i,1,n+1) {cin>>A[i];s.insert(A[i]);}
        fori(i,1,n+1) {cin>>B[i];s.insert(B[i]);}
        sort(A+1,A+n+1);
        sort(B+1,B+n+1);
        a=count(A+1,A+n+1,A[1]);
        b=count(B+1,B+n+1,B[1]);
        if(a==n && b==n)
        {
            if(A[1]==B[1]) cout<<0<<"\n";
            else if(n%2!=0) cout<<-1<<"\n";
            else cout<<n/2 * min(A[1],B[1])<<"\n";
            continue;
        }
        fori(i,1,n+1) if(A[i]!=B[i]) { cnt++;break;}
        if(cnt==0) { cout<<0<<"\n"; continue; }
        fori(i,1,n+1) {mp1[A[i]]++;mp2[B[i]]++;}
        cnt=0;
        for(auto v : s) if((mp1[v]+mp2[v])%2!=0) cnt++;
        if(cnt>0) { cout<<-1<<"\n"; continue; }
        

        vector<LL> C,D;
        minm=min(A[1],B[1]);
        for(auto v : s)
        {
            if(mp1[v]>mp2[v])
            {
                p=abs(mp1[v]-mp2[v])/2;
                while(p>0) {C.pb(v);p--;}
            }
            if(mp1[v]<mp2[v])
            {
                p=abs(mp1[v]-mp2[v])/2;
                while(p>0) {D.pb(v);p--;}
            }
        }
        sort(full(C));sort(full(D),greater<LL>());
        LL n1=C.size();
        fori(i,0,n1) sum+=min(min(C[i],D[i]),minm*2);
        cout<<sum<<"\n";
    }
    return 0;
}