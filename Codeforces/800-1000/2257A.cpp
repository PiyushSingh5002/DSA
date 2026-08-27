#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        bool hasLetter[26] = {false};
        for (int i = 0; i < n; i++) {
            string w; cin >> w;
            hasLetter[w[0] - 'a'] = true;
        }
        vector<string> abbr(m);
        for (auto &a : abbr) cin >> a;

        bool producible[26];
        for (int c = 0; c < 26; c++) producible[c] = hasLetter[c];

        // fixed-point propagation
        bool changed = true;
        while (changed) {
            changed = false;
            for (auto &a : abbr) {
                int first = a[0] - 'A';
                if (producible[first]) continue;
                bool allOk = true;
                for (char ch : a) {
                    if (!producible[ch - 'A']) { allOk = false; break; }
                }
                if (allOk) {
                    producible[first] = true;
                    changed = true;
                }
            }
        }

        bool ok = true;
        for (auto &a : abbr) {
            for (char ch : a) {
                if (!producible[ch - 'A']) { ok = false; break; }
            }
            if (!ok) break;
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
}