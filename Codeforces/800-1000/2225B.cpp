#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 1 ; i < s.length() ; i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
    }
    if(cnt > 2 )cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}