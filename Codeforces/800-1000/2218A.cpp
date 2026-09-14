#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    string out;
    while (t--) {
        int x;
        scanf("%d", &x);
        int y = x + 1;
        if(x == 67) y = 67;
        if(x == -67) y = -67;
        out += to_string(y);
        out += "\n";
    }
    printf("%s", out.c_str());
    return 0;
}