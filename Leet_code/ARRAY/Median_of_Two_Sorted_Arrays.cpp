class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr, vector<int>& arr2) {
        int len1 = arr.size();
        int len2 = arr2.size();
        int q = len1 + len2;
        vector<int> merge;
        int i = 0 ;
        int j = 0;
        while(i<arr.size() && j < arr2.size()){
            if(arr[i] <= arr2[j]){
                merge.push_back(arr[i]);
                i++;
            }
            else{
                merge.push_back(arr2[j]);
                j++;
            }
        }
        while(i < arr.size()){
            merge.push_back(arr[i]);
            i++;
        }
        while(j < arr2.size()){
            merge.push_back(arr2[j]);
            j++;
        }
        if(q%2 == 0){
            double medium = (merge[q/2] + merge[(q/2)-1])/2.0;
            return medium;
        }
        else{
            return merge[q/2];
        }
    }
};