#include<bits/stdc++.h>
#include <functional>
using namespace std;
typedef long long int LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--)
    {
        LL n,i,j,p,q,v,d;
        cin>>n;
        LL A[n];
        
        for(i=0;i<n;i++)
            cin>>A[i];
        q = *max_element(A,A+n);
        LL loc[q+1];//location
        fill(loc,loc+q+1,-1);
        LL star[n];
        fill(star,star+n,0);
        
        for (i = 0; i <n; i++) 
		{
			v=A[i];
			loc[v]=i;
		}
        for(i=0;i<n;i++)
        {
            v=A[i];
            for (j=1; j<=sqrt(v); j++) 
            { 
                if (v%j == 0) 
                { 
			if (v/j == j && loc[j]>i) 
			{
			   d=loc[j];
			   star[d]++;
			}
			else
			{
				if(loc[j]>i)
				{
					d=loc[j];
					star[d]++;
				}
				p=v/j;
				if(loc[p]>i)
				{
					d=loc[p];
					star[d]++;
				}
			}
		} 
            } 
        }
        cout<<*max_element(star,star+n)<<"\n";
    }
    return 0;
}
