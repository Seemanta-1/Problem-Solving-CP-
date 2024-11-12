#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    int s=a.size();
    for(int i=0;i<s;i++)
    {
        if(a[i]==a[s-1])
        {
            cout<<a[i];
        }

    }
}
