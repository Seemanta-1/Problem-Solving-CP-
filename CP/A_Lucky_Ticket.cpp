#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n%2==0)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         int sum1=0,sum2=0;
         for(int j=0;j<n/2;j++)
            {
              if(arr[j]==4 || arr[j]==7)
              sum1=sum1+arr[j];
            }
        for(int j=n/2;j<n;j++)
            {
              if(arr[j]==4 || arr[j]==7)
              sum2=sum2+arr[j];
            }

        if(sum1==sum2 && sum1!=0 && sum2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
            {
             cout<<"NO"<<endl;
        }
    }
    return 0;
}
