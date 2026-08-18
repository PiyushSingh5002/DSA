#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int result = 0;
        sort(nums.begin() , nums.end());
        int left = 0;
        int right = nums.size() - 1;
        
        while(left < right){
            int sum = nums[left] + nums[right];
            if(sum == k){
                result += 1;
                left++;
                right--;
            }
            else if(sum < k){
                left++;
            }else{
                right--;
            }
        }
        cout<<result<<endl;
    }

    return 0;
}