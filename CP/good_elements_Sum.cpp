#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            {
                sum1+=arr[i][j];

            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1 && i!=j)
            {
                sum2+=arr[i][j];

            }
        }
    }

        for(int j=0;j<n;j++){
            arr[n/2][n/2]=0;
            sum3+=arr[n/2][j];
        }

        for(int i=0;i<n;i++){
            arr[n/2][n/2]=0;
            sum4+=arr[i][n/2];
        }

        int total = sum1+sum2+sum3+sum4;

    cout<<total<<endl;

}
