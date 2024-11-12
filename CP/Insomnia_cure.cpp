#include<iostream>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    bool arr[d+1]= {false};
    int count=0;
    for (int i=k; i<=d; i=i+k) {
        arr[i] = true;
    }
    for (int i=l; i<=d; i=i+l) {
        arr[i] = true;
    }
    for (int i=m; i<=d; i=i+m) {
        arr[i] = true;
    }
    for (int i=n; i<=d; i=i+n) {
        arr[i] = true;
    }

    for (int i=1; i<=d;i++) {
        if (arr[i]) {
            count++;
        }
    }
    cout<<count;
    return 0;
}
