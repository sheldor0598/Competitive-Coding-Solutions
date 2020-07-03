#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) 
{
    vector<vector<int>> A(4, vector<int> (4)); // or int A[4][4];
    vector<vector<int>> B(4, vector<int> (4));
    vector<vector<int>> C(4, vector<int> (4));
    int i,j,k=0,maxm=-64,sum=0,p;
    for(p=0;p<4;p++)
    {
        //A[k].resize(5);
        for(i=0;i<4;i++)
        {
            sum=0;
            for(j=i;j<i+3;j++) sum+=arr[p][j];
            A[p][i]=(sum);
        }
        //k++;
    }
    k=0;
    for(i=1;i<5;i++)
    {
        //B[k].resize(5);
        for(j=1;j<5;j++) B[i-1][j-1]=(arr[i][j]);
        //k++;
    }
    k=0;
    for(p=2;p<6;p++)
    {
        //C[k].resize(5);
        for(i=0;i<4;i++)
        {
            sum=0;
            for(j=i;j<i+3;j++) sum+=arr[p][j];
            C[p-2][i]=(sum);
        }
        //k++;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum=A[i][j]+B[i][j]+C[i][j];
            maxm=max(maxm,sum);
        }
    }
    return maxm;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
