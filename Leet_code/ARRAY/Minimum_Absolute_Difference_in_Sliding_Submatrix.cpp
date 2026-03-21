class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> result(m - k + 1 , vector<int>(n - k + 1));
        for(int i = 0 ; i <= m - k ; i++){
            for(int j = 0 ; j <= n - k ; j++){
                set<int> val;
                for(int ii = i ; ii <= i + k - 1 ; ii++){
                    for(int jj = j ; jj <= j + k - 1 ; jj++){
                        val.insert(grid[ii][jj]);
                    }
                }
                if(val.size() == 1){
                    result[i][j] = 0;
                    continue;
                }
                int minval = INT_MAX;
                auto prev = val.begin();
                auto curr = next(prev);

                while(curr != val.end()){
                    minval = min(minval , *curr - *prev);
                    prev++;
                    curr++;
                }
                result[i][j] = minval;
            }
        }return result;
    }
};