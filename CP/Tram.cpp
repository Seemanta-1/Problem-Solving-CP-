#include<iostream>
using namespace std;

struct trum
{
    int exit;
    int entry;
};
int main()
{
    int n;
    cin>>n;
    trum arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].exit>>arr[i].entry;
    }
    int result = 0;
    int capacity=0;
    for(int i=0;i<n;i++)
    {
        result-=arr[i].exit;
        result+=arr[i].entry;

        if(result>=capacity)
        {
            capacity=result;
        }
    }
    cout<<capacity<<endl;
}
