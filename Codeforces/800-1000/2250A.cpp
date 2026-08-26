#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> w(n);
        for (auto &x : w) cin >> x;
        
        if (n % 2 != 0) {
            cout << "NO\n";
            continue;
        }
        
        long long minOdd = LLONG_MAX, maxEven = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) minOdd = min(minOdd, w[i]);   
            else maxEven = max(maxEven, w[i]);            
        }
        
        cout << ((minOdd - maxEven >= 2) ? "YES" : "NO") << "\n";
    }
}