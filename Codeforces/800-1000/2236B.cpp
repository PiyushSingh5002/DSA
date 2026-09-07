#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        for(int i = 0 ; i + k < n ; i++){
            if(s[i] == '1'){
                s[i] = '0';
                if(s[i + k] == '0')s[i + k] = '1';
                else s[i + k] = '0';
            }
        }bool find = false;
        for(auto& x : s){
            if(x == '1') find = true;
        }
        if(find)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}