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

int main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
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
	freopen("inputCF.txt","r",stdin);
    freopen("outputCF.txt","w",stdout);
	#endif
	KILL HER
	LL n,i;
	cin>>n;
	string A[n];

	map<string,LL> mp1;
	map<string,string> mp2;

	map<string,LL>::iterator itr1;
	map<string,string>::iterator itr2;

	mp1.insert({ "red", 0});
	mp1.insert({ "orange", 0 });			
	mp1.insert({ "yellow", 0 }); 
	mp1.insert({ "purple", 0 }); 
	mp1.insert({ "blue", 0 });
	mp1.insert({ "green", 0 });
    /*the Power Gem of purple color,
    the Time Gem of green color,
    the Space Gem of blue color,
    the Soul Gem of orange color,
    the Reality Gem of red color,
    the Mind Gem of yellow color. */
	mp2.insert({ "red", "Reality"});
	mp2.insert({ "orange", "Soul" }); 
	mp2.insert({ "yellow", "Mind" }); 
	mp2.insert({ "purple", "Power" }); 
	mp2.insert({ "blue", "Space" });
	mp2.insert({ "green", "Time" });

	goflessthan(i,0,n)
		cin>>A[i];
    goflessthan(i,0,n)
    	mp1[A[i]]++;

	cout<<6-n<<"\n";
	
	for(itr1=mp1.begin(),itr2=mp2.begin();itr1!=mp1.end(),itr2!=mp2.end();itr1++,itr2++)
		if(itr1->second == 0)
    		cout<<itr2->second<<"\n";
	return 0;
}