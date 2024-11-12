#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result = 0;
    int capacity=0;
    for(int i=0;i<n;i++)
    {
        int exit,entry;
        cin>>exit>>entry;

        result-=exit;
        result+=entry;

        if(result>=capacity)
        {
            capacity=result;
        }
    }
    cout<<capacity<<endl;
}
