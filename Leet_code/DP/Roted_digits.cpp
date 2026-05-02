class Solution {
public:
    int rotatedDigits(int k) {
        int rotate[10] = {1 , 1 , 2 , -1 , -1 , 2 , 2 , -1 , 1 , 2};
        int result = 0;
        int n = 2;
        while( n <= k){
            int same = 0;
            int diff = 0;
            int eror = 0;
            int w = n;
            while(w > 0){
                int q = w%10;
                w = w/10;
                int r = rotate[q];
                if(r == -1)eror++;
                if(r == 1)same++;
                if(r == 2)diff++;
            }
            n++;
            if(eror>0)continue;
            if(diff > 0)result++;
            
        }
        return result;
    }
};