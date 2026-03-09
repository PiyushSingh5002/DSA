class Solution {
public:
    int M = 1e9 + 7;
    int t[201][201][2];
    int solve(int one , int zero , bool lastone , int limit){
        if(one == 0 && zero == 0){
            return 1;
        }
        if(t[one][zero][lastone] != -1){
            return t[one][zero][lastone];
        }

        long long result = 0;
        if(lastone){
            for(int len = 1 ; len <= min(zero , limit) ; len++){
                result = (result + solve( one ,  zero - len , false , limit))%M;
            }
        }else{
            for(int len = 1 ; len <= min(one , limit) ; len++){
                result = (result + solve(one - len, zero , true , limit))%M;
            }
        }return t[one][zero][lastone] = result;
    }
    
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(t , -1, sizeof(t));
        int startwithone = solve(one , zero , false , limit);
        int startwithzero = solve(one , zero , true , limit);
        return (startwithone + startwithzero) % M;
    }
};