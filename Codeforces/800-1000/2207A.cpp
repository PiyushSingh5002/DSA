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

        for (int i = 1; i < n - 1; i++) {
            if (s[i - 1] == '1' && s[i + 1] == '1') {
                s[i] = '1';
            }
        }

        int mx = count(s.begin(), s.end(), '1');

        for (int i = 1; i < n - 1; i++) {
            if (s[i - 1] == '1' && s[i + 1] == '1') {
                s[i] = '0';
            }
        }

        for (int i = 1; i < n - 1; i++) {
            if (s[i - 1] == '1' && s[i + 1] == '1') {
                s[i] = '0';
            }
        }

        int mn = count(s.begin(), s.end(), '1');

        cout << mn << " " << mx << '\n';
    }

    return 0;
}