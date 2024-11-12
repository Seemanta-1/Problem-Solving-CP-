#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());
 string r= a+b;
 sort(r.begin(),r.end());
 sort(c.begin(),c.end());
 bool flag=false;
 if(c.length()==r.length())
 {
    for(int i=0;i<c.length();i++)
    {
        if(c[i]==r[i])
        {
           flag=true;
        }
        else{
           cout<<"NO"<<endl;
           return 0;
        }
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
 }
 else{
    cout<<"NO"<<endl;
 }

    return 0;
}
