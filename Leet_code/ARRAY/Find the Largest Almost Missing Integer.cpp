class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(int i = 0 ; i <= nums.size() - k ; i++){
            int p = i;
            unordered_set<int> st;
            while(p < k + i){
                st.insert(nums[p]);
                p++;
            }
            for(auto& x : st){
                mp[x]++;
            }
        }
        int result = -1;
        for(auto &[x, cnt] : mp){
            if(cnt == 1){
                result = max(result , x);
            }
        }
        return result;
    }
};