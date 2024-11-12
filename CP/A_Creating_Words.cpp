#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            swap(s[0],s[4]);
        }
        cout<<s<<endl;
    }
    return 0;
}