#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define KILL ios_base::sync_with_stdio(false);
#define HER cin.tie(NULL);
#define NOW cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forreverse(i,a,b) for(i=a;i>=b;i--)
#define full(x) x.begin(),x.end()
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007
const LL total_char = 256; 
   
string stringsub(string s, string f) 
{ 
    LL i,j,l1,l2;
    l1 = s.length(); 
    l2 = f.length(); 
    if(l1<l2) return "";
  
    LL hashf[total_char] = {0}; 
    LL hashstr[total_char] = {0}; 
    fori(i,0,l2) hashf[f[i]]++; 
  
    LL first = 0, index = -1, minm = INT_MAX,cnt=0; 
    fori(j,0,l1) 
    { 
        hashstr[s[j]]++; 
        if (hashf[s[j]] != 0 && hashstr[s[j]] <= hashf[s[j]] ) cnt++; 
        if (cnt == l2) 
        { 
            while ( hashstr[s[first]] > hashf[s[first]] || hashf[s[first]] == 0) 
            { 
  
                if (hashstr[s[first]] > hashf[s[first]]) hashstr[s[first]]--; 
                first++; 
            } 
            LL winlen = j - first + 1; 
            if (minm > winlen) 
            { 
                minm = winlen; 
                index = first; 
            } 
        } 
    } 
    if (index == -1) return ""; 
    return s.substr(index, minm); 
} 
int main() 
{ 
    #ifndef ONLINE_JUDGE
    freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
    #endif
    KILL HER NOW
    LL t;
    cin>>t;
    go(t)
    {
        LL n;
        string s;
        cin>>s;
        string f="123"; 
        string l=stringsub(s,f); 
        cout<<l.length();
        endl;
    }
    return 0; 
} 