#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	LL n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	LL k,i,j;
	k=s.length();
	char A[n+1];
	strcpy(A,s.c_str());
	for(j=1;j<=t;j++)
    {
    	for(i=0;i<n;i++)
    	{
            if(A[i]=='B' && A[i+1]=='G')
            {
                char temp;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
                i++;
            }
    	}
    }
     for(i=0;i<n;i++)
            cout<<A[i];
    return 0;
}