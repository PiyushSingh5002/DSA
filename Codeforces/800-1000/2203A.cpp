#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;

        int maxBoxes = d / m + 1;

        int answer = (n + maxBoxes - 1) / maxBoxes;

        cout << answer << '\n';
    }

    return 0;
}