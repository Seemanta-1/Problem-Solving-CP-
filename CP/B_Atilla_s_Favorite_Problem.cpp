#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    string s;
    cin>>n>>s;
    int result;
    char max = 'a';
    for (char c : s) {
        if (c > max) {
            max=c;
        }
         result = max-'a'+1;
    }
    cout<<result<<endl;
   }
    return 0;
   }

