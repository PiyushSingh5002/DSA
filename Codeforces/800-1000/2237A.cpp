#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min_val = INT_MAX;
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(a[i] < min_val){
                min_val = a[i];
            }else{
                a[i] = min_val;
            }
            ans += a[i];
        }
        cout << ans << '\n';
    }

    return 0;
}