class Solution {
public:
    int findLatestStep(vector<int>& arr, int n) {
        int m = arr.size();
        vector<int> binary(m + 2 , 0);
        vector<int> length(m + 2 , 0);
        int result = -1;
        int count = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            int x = arr[i];
            binary[x] = 1 ;
            int left = length[x - 1];
            int right = length[x + 1];

            if(left == n)count--;
            if(right == n)count--;
            int sum = left + right + 1;

            int left_b = x - left;
            int right_b = x + right;

            length[left_b] = sum;
            length[right_b] = sum;

            if(sum == n) count++;

            if(count > 0){
                result = i + 1;
            }
        }return result;
    }
};