class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int low = x + k - 1;
        while(x < low){
            for(int j = y ; j < y + k ; j++){
                swap(grid[x][j] , grid[low][j]);
                
            }x++;
            low--;
        }return grid;
    }
};