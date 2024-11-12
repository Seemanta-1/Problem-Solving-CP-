#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int sum = 0;
        int best_x = 2;
        
        for (int x = 2; x <= n; ++x) {
            int k = n / x;
            int c_sum = x * k * (k + 1) / 2;
            
            if (c_sum > sum) {
                sum = c_sum;
                best_x = x;
            }
        }
        
        cout << best_x << endl;
    }
    
    return 0;
}
