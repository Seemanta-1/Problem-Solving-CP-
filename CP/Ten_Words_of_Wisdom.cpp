#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int max=-1;
        int index=-1;
        for(int i=0;i<n;i++)
        {
            int ai,bi;
            cin>>ai>>bi;

        if(ai<=10 && bi>=max)
        {
            max=bi;
            index=i+1;
        }
        }
        cout<<index<<endl;
    }
}