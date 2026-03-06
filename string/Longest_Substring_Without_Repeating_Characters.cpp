class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st; //because duplicate never exist and in increaing order
        int left = 0 , right = 0 , ans = 0;
        while(right<s.length()){
            if(st.find(s[right]) == st.end()){//find will give the iterate position of that value if not present then will return st.end
                st.insert(s[right]);
                right++;
                ans = max(ans , right - left );
            }
            else{
                st.erase(s[left]);
                left++;
            }
        }
        return ans;
    }
};