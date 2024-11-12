#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    int p;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            p=abs(arr[i]-arr[j]);

            if(arr[i]<=arr[j]){
                arr[i]=arr[j];
            }
        }
    }
    if(abs(p)<=1)
    {
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}
    }
}
