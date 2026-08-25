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
        vector<int> check;
        for(auto& t : s){
            check.push_back(t - '0');
        }
        sort(check.begin() , check.end());
        s.clear();
        for(auto& x : check){
            s += to_string(x);
        }
        cout << s << "\n";
    }

    return 0;
}