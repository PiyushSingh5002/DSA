#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        bool possible = false;
        sort(a.begin() , a.end());
        for(int i = 0 ; i < n ; i++){
            if(a[i] == 67){
                possible = true;
            }
        }
        cout << (possible ? "YES" : "NO") << "\n";
    }
}