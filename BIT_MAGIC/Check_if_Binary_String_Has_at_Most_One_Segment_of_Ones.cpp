class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s[0] == '0')return false;
        int i = 0;
        while( i < s.length() && s[i] != '0' ){
            i++;
        }
            for(int n = i ; n < s.length() ; n++){
                if(s[n] == '1')return false;
            }
        return true;
    }
};