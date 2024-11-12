#include<iostream>
#include<algorithm>
using namespace std;

float smallest(int x, int y, int z){
  return x < y ? (x < z ? x : z) : (y < z ? y : z);
}
int main()
{
    int n, k, l, c, d, p, nl, np;

    cin>>n >>k >>l >>c >>d >>p >>nl >>np ;

    int x= k*l;
    int y= x/nl;
    int z=c*d;
    int a=p/np;
    int b= smallest(y,z,a)/n;
    cout<<b<<endl;
    return 0;

}
