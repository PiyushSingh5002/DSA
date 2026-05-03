class Solution {
public:
    bool rotateString(string s, string goal) {
        int r = s.length();
        if(s.size() != goal.size())return false;
        string common = s + s;
        for(int i = 0 ; i < r ; i++){
            int q = 0 ;
            for(int j = i ; j < i + r ; j++){
                if(common[j] == goal[q]){
                    q++;
                }else{
                    continue;
                }
                if(q == goal.size()){
                    return true;
                }
            }
        }
        return false;
    }
};