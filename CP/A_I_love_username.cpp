#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int m=0;
    int k=0;

    for(int i=1;i<n;++i)
    {
        if(arr[i]>m){
            count++;
        m=arr[i];
        }
        else if(arr[i]<k){
            count++;
        k=arr[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
