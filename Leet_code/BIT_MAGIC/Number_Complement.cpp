// this and complement of base 10 are same questions there is not a single bit difference in it
class Solution {
public:
    int findComplement(int n) {
        int allone = 0;
        while(allone < n){
            allone = (allone<<1)|1;
        }return allone^n;
    }
};