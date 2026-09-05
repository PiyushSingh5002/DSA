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

        vector<pair<char, int>> blocks;
        for(int i = 0 ; i < s.length() ; i++){
            char c = s[i];
            int count = 0;
            while(i < s.length() && s[i] == c){
                count++;
                i++;
            }
            i -= 1;
            blocks.push_back({c , count});
        }
        int totalBlocks = blocks.size();
        int ans = totalBlocks; 
        for (int i = 1; i < (int)blocks.size() - 1; i++) {
            if(blocks[i].second < 2){
                if(blocks[i - 1].first == blocks[i + 1].first){
                    ans = min(ans , totalBlocks - 2);
                }else{
                    ans = min(ans , totalBlocks - 1);
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}