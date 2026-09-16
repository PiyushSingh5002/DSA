#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, c, k;
        scanf("%lld %lld %lld", &n, &c, &k);
        vector<long long> a(n);
        for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (a[i] > c) break;
            long long add = min(k, c - a[i]);
            a[i] += add;
            k -= add;
            c += a[i];
        }
        printf("%lld\n", c);
    }
    return 0;
}