#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];

    int minRow = n ; 
    int maxRow = -1 ; 
    int minCol = m ;
    int maxCol = -1 ;
    for(int i = 0 ; i < n ; i++){
        for(int k = 0 ; k < m ; k++){
            if(a[i][k] == '*'){
                minRow = min(minRow , i);
                minCol = min(minRow , k);
                minRow = max(minRow , i);
                minCol = max(minRow , k);
            }
        }
    }
    for(int i = minRow ; i <= maxRow ; i++){
        for(int j = maxCol ; j<= maxCol ; j++){
            cout<<a[i][j];
        }
        cout<<'\n';
    }
    return 0;
}