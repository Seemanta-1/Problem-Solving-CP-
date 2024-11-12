#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    int count;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;++i)
    {
        if(arr[i]>k && arr[i]>0)
         count=++i;
         else{
            count=i-n+1;
         }
    }

    cout<<count<<endl;
}
