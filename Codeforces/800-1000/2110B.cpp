#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int counter = 0;
        bool canBreak = false;

        for (int i = 0; i < n; i++) {
            if(s[i] == '(')counter+= 1;
            if(s[i] == ')')counter -= 1;
            if(counter == 0 && i < n - 1){
                canBreak = !canBreak;
                break;
            }
            
        }

        cout << (canBreak ? "YES" : "NO") << "\n";
    }
    return 0;
}