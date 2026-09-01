#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int first = -1, last = -1, ones = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ones++;
                if (first == -1) first = i;
                last = i;
            }
        }

        if (first == -1) {
            cout << 0 << " " << 0 << "\n";
            continue;
        }

        int len = last - first + 1;

        int minOnes = len / 2 + 1;
        int maxOnes = len;

        cout << minOnes << " " << maxOnes << "\n";
    }

    return 0;
}