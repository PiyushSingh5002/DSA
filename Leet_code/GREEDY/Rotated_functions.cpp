class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int f = 0;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            f += i*nums[i];
        }
        int result = f;
        for(int i = 0 ; i < n ; i++){
            int newf = f + sum - n*nums[n - 1 - i];
            result = max(result , newf);
            f = newf;
        }
        return result;
    }
};