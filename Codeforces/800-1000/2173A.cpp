#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int rest = 0 ;
        int q = 0;
        int i = 0;
        while(i < s.length()){
            if(s[i] == '1'){
                q = k;
            }
            if(q > 0){
                q--;
            }else{
                rest++; 
            }
            i++; // Fixed: increment i to avoid infinite loop
        }
        cout<<rest<<endl;

    }

    return 0;
}