class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> flat;
        for(auto& row : grid){
            for(auto& val : row){
                flat.push_back(val);
            }
        }
        int n = flat.size();
        nth_element(flat.begin() , flat.begin() + n/2 , flat.end());
        int medium = flat[n/2];
        int result = 0;
        for(auto& vals : flat){
            int dig = abs(vals - medium);
            if(dig % x != 0){
                return -1;
            }else{
                result += dig;
            }
        }
        return result/x;
    }
};