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

	string s;
	cin>>s;
	LL n,i,cnt1=0,cnt2=0;
	n=s.length();
	char A[n+1];
	strcpy(A,s.c_str());
	if(islower(A[0]))
	{
		for(i=1;i<n;i++)
		{
			if(isupper(A[i]))
					cnt1++;
		}
		if(cnt1==n-1)
		{
			A[0]=toupper(A[0]);
			for(i=1;i<n;i++)
					A[i]=tolower(A[i]);
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(isupper(A[i]))
					cnt2++;
		}
		if(cnt2==n)
		{
			for(i=0;i<n;i++)
					A[i]=tolower(A[i]);
		}
	}
	for(i=0;i<n;i++)
			cout<<A[i];
	return 0;
}