#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> w(n);
        for (auto &x : w) cin >> x;
        if(n % 2 != 0){
            cout<<NO<<endl;
        }
        long long maxEven = LLONG_MIN, minOdd = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            if(i % 2 == 0)minOdd = min(w(i)  , minOdd);
            else maxEven = max(w(i)  , maxEven);
        } 

        cout << ((minOdd - maxEven) >=2 ? "YES" : "NO") << "\n";
    }
}