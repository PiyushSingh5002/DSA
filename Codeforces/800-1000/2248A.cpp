#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i = 0;
        bool dz = false, doo = false;
        while(i < s.length()){
            while(s[i] != '0'){
                i++;
            }
            s.erase(i , 1);
            i = 0;
            while(s[i] != '1'){
                i++;
            }
            s.erase(i , 1);
            break;
        }

        cout << s << "\n";
    }
}