#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char first = s[0];
        char last = s[s.length() - 1];
        if(first != last){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO">>endl;
        }

    }
    return 0;
}