#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < 3; i++) {
            if (s[i]!= 'a' + i) {
                count++;
            }
        }

        if (count<= 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
