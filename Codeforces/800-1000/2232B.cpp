#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    long long S = 0;
    long long best = LLONG_MAX;

    for (int j = 1; j <= n; j++) {
        S += a[j - 1];
        long long avg = S / j;
        best = min(best , avg) ;
        cout <<best<< " ";
    }
    cout<< "\n";
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}