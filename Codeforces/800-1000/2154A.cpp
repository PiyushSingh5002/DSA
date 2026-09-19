#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, string &s) {
    int count = 0;
    int last = -k;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 1){
            if(s - last <= k - 1){
                last = i;
            }else{
                count++;
                last = i;
            }
        }
    }
    return 0; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << solve(n, k, s) << "\n";
    }
    return 0;
}