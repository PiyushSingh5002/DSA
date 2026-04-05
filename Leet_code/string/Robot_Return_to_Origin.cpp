class Solution {
public:
    bool judgeCircle(string moves) {
        int V = 0;
        int H = 0;
        for(int i = 0 ; i < moves.size() ; i++){
            if(moves[i] == 'L')V++;
            if(moves[i] == 'R')V--;
            if(moves[i] == 'U')H++;
            if(moves[i] == 'D')H--;
        }
        if(V != 0 || H != 0) return false;

        return true;
    }
};