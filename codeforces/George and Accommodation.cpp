#include<bits/stdc++.h>
using namespace std;
#define LL long long int

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	LL n,cnt=0;
	cin>>n;
	while(n--)
	{
		LL p,q;
		cin>>p>>q;
		if((q-p)>=2)
		    cnt++;
	}
	cout<<cnt;
	return 0;
}
