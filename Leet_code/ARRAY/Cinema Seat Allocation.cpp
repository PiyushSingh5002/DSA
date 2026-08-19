class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int , unordered_set<int>> mp;
        for(auto& reserved : reservedSeats){
            int row = reserved[0];
            int seat = reserved[1];
            mp[row].insert(seat);
        }
        int result = (n - mp.size()) * 2;

        for(auto& [roww , seaat] : mp){

            auto avail  = [&](int ss){
                return seaat.find(ss) == seaat.end();   
            };

            bool fora = avail(2) && avail(3) && avail(4) && avail(5);
            bool forb = avail(4) && avail(5) && avail(6) && avail(7);
            bool forc = avail(6) && avail(7) && avail(8) && avail(9);

            if(fora && forc){
                result += 2;
            }
            else if(fora || forb || forc){
                result += 1;
            }
        }
        return result;
    }
};