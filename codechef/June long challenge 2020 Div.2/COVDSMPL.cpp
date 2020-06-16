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
#define pb push_back
#define pob pop_back
#define mp make_pair
#define M 1000000007

int main()
{
	/*#ifndef ONLINE_JUDGE freopen("inputCF.txt","r",stdin);freopen("outputCF.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputHR.txt","r",stdin);freopen("outputHR.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputCC.txt","r",stdin);freopen("outputCC.txt","w",stdout);
	#endif #ifndef ONLINE_JUDGE freopen("inputGFG.txt","r",stdin);freopen("outputGFG.txt","w",stdout);
	#endif */
	#ifndef ONLINE_JUDGE
	freopen("inputCC.txt","r",stdin);
    freopen("outputCC.txt","w",stdout);
	#endif
	KILL HER NOW
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,p1;
		cin>>n>>p1;
		LL A[n+1][n+1]={0},R[n+1]={0},C[n+1]={0};
		LL i,j;
		LL X,total,b=0,p,q,dp=0,r;
		cout<<1<<" "<<1<<" "<<1<<" "<<n<<" "<<n<<endl;
		cin>>X;
		if(X==-1) return 0;
		else total=X;
		LL totalR=X,totalC=X;
		LL count=total;
		LL dpR1=0,dpC1=0,dpR2=0,dpC2=0,bR1=0,bC1=0,bR2=0,bC2=0,ccr=0,ccc=0,sumR3=0,sumC3=0;
		LL k=(n/2)+1;
		fori(i,2,k+1)
		{
			ccr++;

			cout<<1<<" "<<i<<" "<<1<<" "<<n<<" "<<n<<endl;	//R : 2-5,3-5
			cin>>X;
			if(X==-1) return 0;
			R[i-1]=total-(X+dpR1);
			dpR1+=R[i-1];
			totalR-=R[i-1];
			if(totalR==0) { bR1++ ; break; }

			if(n%2==0 && n-ccr==k-1) break;
			
			cout<<1<<" "<<i-ccr<<" "<<1<<" "<<n-ccr<<" "<<n<<endl; 	//R : 1-4,1-3
			cin>>X;
			if(X==-1) return 0;
			R[n-ccr+1]=total-(X+dpR2);
			dpR2+=R[n-ccr+1];
			totalR-=R[n-ccr+1];
			if(totalR==0) { bR2++ ; break; }
		}
		R[k]=totalR;								// R : 3/4
		//if(bR==0) R[n]=total-dpR;
		fori(i,2,k+1)
		{
			ccc++;

			cout<<1<<" "<<1<<" "<<i<<" "<<n<<" "<<n<<endl;	//C : 2-5,3-5
			cin>>X;
			if(X==-1) return 0;
			C[i-1]=total-(X+dpC1);
			dpC1+=C[i-1];
			totalC-=C[i-1];
			if(totalC==0) { bC1++ ; break; }

			if(n%2==0 && n-ccc==k-1) break;

			cout<<1<<" "<<1<<" "<<i-ccc<<" "<<n<<" "<<n-ccc<<endl;  //C : 1-4,1-3
			cin>>X;
			if(X==-1) return 0;
			C[n-ccc+1]=total-(X+dpC2);
			dpC2+=C[n-ccc+1];
			totalC-=C[n-ccc+1];
			if(totalC==0) { bC2++ ; break; }
		}
		C[k]=totalC;								// C : 3/4
		//if(bC==0) C[n]=total-dpC;
		LL sumR=0,sumC=0;

		fori(i,1,n+1)  // sum of all rows and all columns
		{
			sumC+=C[i];
			sumR+=R[i];
		}

		LL minusC[n]={0},minusR[n]={0},dpsumC=0,dpsumR=0;

		fori(i,1,n+1)   //sum of all row-(i+1-->n) and all columns-(i+1-->n)
		{
			minusC[i]=sumC-(C[i]+dpsumC);
			dpsumC+=C[i];

			minusR[i]=sumR-(R[i]+dpsumR);
			dpsumR+=R[i];
		}


		fori(i,1,n)
		{
			if(R[i]==0) continue;
			fori(j,1,n)
			{
				if(C[j]==0) continue;
				if(R[i]==0) break;
				p=0;q=0;
				
				cout<<1<<" "<<i+1<<" "<<j+1<<" "<<n<<" "<<n<<endl; //box
				cin>>X;
				if(X==-1) return 0;
				p=X;

				r=total-(minusC[j]+minusR[i]-p+dp);
				minusC[j]=p;
				A[i][j]=r;
				C[j]-=r; R[i]-=r;
				dp+=r;
				count-=r;
				if(count==0) { b++ ; break; }
			}
			if(b>0) break;

			if(R[i]==1) {
				dp+=1; R[i]--; A[i][n]=1;
			}
		}
		fori(j,1,n+1)
		{
			if(R[n]==0) break;
			if(C[j]==1) {
				R[n]--; C[j]--; A[n][j]=1;
			}
		}
		cout<<2<<endl;
		fori(i,1,n+1) {
			fori(j,1,n+1) cout<<A[i][j]<<" "; cout<<endl;
		}
        cin>>X;
		if(X==-1) return 0;
	}
	return 0;
}