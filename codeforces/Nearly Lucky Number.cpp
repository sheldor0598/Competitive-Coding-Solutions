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
	while(n>0)
	{
		if(n%10==4 || n%10==7)
			cnt++;
		n/=10;
	}
	if(cnt==4 || cnt==7)
        cout<<"YES";
    else
        cout<<"NO";
	return 0;
}
