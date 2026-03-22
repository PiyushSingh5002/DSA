class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& mat){
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> result(m , vector<int>(m));
        for(int i = 0 ; i < m ; i++){
            int o = m - 1;
            for(int j = 0 ; j < n ; j++){
                result[o][i] = mat[i][j];
                o--;
            }
        }return result;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int rotation = 4;
        while(rotation > 0){
            if(mat == target){
                return true;
            }else{
                rotation--;
                mat = rotate(mat);
            }
        }return false;
    }
};