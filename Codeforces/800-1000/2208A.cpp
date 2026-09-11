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
        unordered_map<int , int> mp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x ;
                cin >> x;
                mp[x]++;
            }
        }

        int mx = 0;
        for(auto [color , count] : mp){
            mx = max(mx , count);
        }

        if (mx <= (n * n) - n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}