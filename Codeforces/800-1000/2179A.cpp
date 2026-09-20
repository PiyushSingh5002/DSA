#include <bits/stdc++.h>
using namespace std;

int solve(int k, int x) {
    int y =(k * x) + 1;
    return y;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        cout << solve(k, x) << "\n";
    }
    return 0;
}