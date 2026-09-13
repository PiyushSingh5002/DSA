#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    string out;
    while (t--) {
        long long n, k, m;
        scanf("%lld %lld %lld", &n, &k, &m);
        if (k > m) {
            out += "NO\n";
        } else {
            out += "YES\n";
            long long val = m - k + 1;
            for (long long i = 1; i <= n; i++) {
                if (i % k == 0) out += to_string(val);
                else out += "1";
                out += (i == n) ? '\n' : ' ';
            }
        }
    }
    printf("%s", out.c_str());
    return 0;
}