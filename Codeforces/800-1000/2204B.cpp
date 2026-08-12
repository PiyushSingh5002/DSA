#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        // prefix maximum and its rightmost position
        vector<int> prefMax(n);
        vector<int> rightPos(n);

        int mx = -1;
        int pos = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] >= mx) {
                mx = a[i];
                pos = i;
            }

            prefMax[i] = mx;
            rightPos[i] = pos;
        }

        int ans = 0;
        int r = n - 1;

        while (r >= 0) {
            int p = rightPos[r];

            ans++;

            r = p - 1;
        }

        cout << ans << '\n';
    }

    return 0;
}