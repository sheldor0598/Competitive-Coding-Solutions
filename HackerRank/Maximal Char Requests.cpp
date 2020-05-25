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


unordered_map< LL, vector<LL> > val; 
LL countof(LL A[], LL n, LL l, LL r, LL x) 
{ 
	LL a,b;
	a=lower_bound(val[x].begin(),val[x].end(),l)-val[x].begin(); 
	b=upper_bound(val[x].begin(),val[x].end(),r)-val[x].begin(); 
	return b-a; 
} 


struct node 
{ 
   LL maxm; 
}; 
LL middle(LL s, LL e) 
{  
	return s + (e -s)/2;
} 
struct node maxmmutill(struct node *st, LL ss, LL se, LL a, LL b, LL pos)
{
	struct node temp,l,r; 
    if (a <= ss && b >= se) 
        return st[pos]; 
    if (se < a || ss > b) 
    { 
       temp.maxm = INT_MIN; 
       return temp; 
    }
    LL mid = middle(ss, se); 
    l = maxmmutill(st, ss, mid, a, b, 2*pos+1); 
    r = maxmmutill(st, mid+1, se, a, b, 2*pos+2); 
    temp.maxm = max(l.maxm, r.maxm); 
    return temp;  
}
struct node maxmm(struct node *st, LL n, LL a, LL b) 
{ 
    struct node temp;  
    if (a < 0 || b > n-1 || a > b) 
    {  
        temp.maxm = INT_MAX; 
        return temp; 
    } 
  
    return maxmmutill(st, 0, n-1, a, b, 0); 
} 
void formtUtil(LL A[], LL ss, LL se, struct node *st, LL si) 
{ 
    if (ss == se) 
    { 
        
        st[si].maxm = A[ss]; 
        return ; 
    } 
    LL mid = middle(ss, se); 
    formtUtil(A, ss, mid, st, si*2+1); 
    formtUtil(A, mid+1, se, st, si*2+2); 
  
     
    st[si].maxm = max(st[si*2+1].maxm, st[si*2+2].maxm); 
} 
struct node *formt(LL A[], LL n) 
{ 
    LL x = (LL)(ceil(log2(n))); 
    LL max_size = 2*(LL)pow(2, x) - 1; 
    struct node *st = new struct node[max_size]; 
    formtUtil(A, 0, n-1, st, 0); 
    return st; 
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
	LL n,i,mxm,q,a,b,cnt;
	cin>>n;
	string s;
	cin>>s;
	LL A[n];
    goflessthan(i,0,n)
    {
    	if(isupper(s[i]))
    		s[i]=tolower(s[i]);
    	//cout<<s[i];
		A[i]=(s[i]-'0');
		//cout<<A[i];
	}
	struct node *st = formt(A, n);
	for (i=0; i<n; ++i) 
		val[A[i]].push_back(i+1);
    cin>>q;
    while(q--)
    {
    	cin>>a>>b;
    	/*gofequalto(i,a,b)
    		cout<<A[i]<<" ";*/
    	struct node res= maxmm(st, n, a, b);
    	//cout<<':'<<maxm<<'-';
    	mxm=res.maxm;
    	cnt=countof(A, n, a+1, b+1, mxm);
    	cout<<cnt<<"\n";
    }
	return 0;
}
