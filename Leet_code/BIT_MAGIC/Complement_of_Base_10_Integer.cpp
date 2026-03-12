class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 0;
        if(n==0)return 1;
        while(mask < n){
            mask = (mask<<1)|1;
        }return n ^ mask;
    }
};
// this and number complement are same question and we can do this in any method means by this or that