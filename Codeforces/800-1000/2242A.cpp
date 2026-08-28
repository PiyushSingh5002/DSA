#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int k;
        scanf("%d", &k);
        vector<long long> c(k);
        for(auto &x : c) scanf("%lld", &x);
        bool has3 = false;
        int cnt2 = 0;
        for(auto x : c){
            if(x >= 3) has3 = true;
            else if(x == 2) cnt2++;
        }
        bool ans = has3 || (cnt2 >= 2);
        printf(ans ? "YES\n" : "NO\n");
    }
}