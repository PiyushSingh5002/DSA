class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> sumx(m , vector<int>(n , 0));
        vector<vector<int>> sumy(m , vector<int>(n , 0));
        int result = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                sumx[i][j] = (grid[i][j] == 'X');
                sumy[i][j] = (grid[i][j] == 'Y');

                if(i > 0){
                    sumx[i][j] += sumx[i - 1][j];
                    sumy[i][j] += sumy[i - 1][j];
                }
                if(j >0){
                    sumx[i][j] += sumx[i][j - 1];
                    sumy[i][j] += sumy[i][j - 1];
                }
                if(i > 0 && j > 0){
                    sumx[i][j] -= sumx[i - 1][j - 1];
                    sumy[i][j] -= sumy[i - 1][j - 1];
                }
                if(sumx[i][j] == sumy[i][j] && sumx[i][j] > 0){
                    result++;
                }
           }
        }return result;
    }
};