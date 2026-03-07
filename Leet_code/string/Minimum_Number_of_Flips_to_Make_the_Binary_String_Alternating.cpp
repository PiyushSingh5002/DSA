class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        s = s + s ;
        int diff1 = 0;
        int diff2 = 0;
        int ans = n;
        for(int i = 0 ; i < 2 * n ; i++){
            char s1 = (i % 2 == 0) ? '1' : '0';
            char s2 = (i % 2 == 0) ? '0' : '1';
            if(s[i] != s1) diff1++;
            if(s[i] != s2) diff2++;

            if(i >= n){
                int left = i - n ;

                char ss1 = (left % 2 == 0)?'1' : '0';
                char ss2 = (left % 2 == 0)?'0' : '1';

                if(s[left] != ss1)diff1--;
                if(s[left] != ss2)diff2--;

            }if(i >= n - 1){
                 ans = min(ans , min(diff1 , diff2));
            }
           
        }return ans;
    }
};