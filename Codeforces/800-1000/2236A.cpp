#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> h(n);
        int mi = INT_MAX;
        int ma = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> h[i];
            mi = min(mi , h[i]);
            ma = max(ma , h[i]);
        }   
        cout << ma - mi + 1<< "\n";
    }
    return 0;
}