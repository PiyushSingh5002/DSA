#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        int result = 0;
        while(true){
            sort(arr.begin() , arr.end());
            if(arr[0] == arr[1] || arr[1] == arr[2])break;
            arr[0] = arr[0] + 1;
            arr[2] = arr[2] - 1;
            result += 1;
        }
        cout<<result<<endl;
    }

    return 0;
}