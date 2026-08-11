#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int f = 0;
        int k = 0 ;
        int q = 0;
        while(f < s.length()){
            if(s[f] == '(')k++;
            else q++;
            f++;
        }
        if(k != q){
            cout<< "NO\n"<<endl;
        }else{
            cout<<"YES\n"<<endl;
        }

    }

    return 0;
} 