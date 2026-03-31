class Solution {
public:
    bool issame(string result ,string  str2 ,int i ,int  m){
        for(int j = 0 ; j < m ; j++){
            if(result[i] != str2[j]){
                return false;
            }i++;
        }
        return true;
    }
    string generateString(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        int N = n + m - 1;
        string result(N , '$');
        vector<bool> canChange(N ,false);
        for(int i = 0 ; i < n ; i++){
            if(str1[i] == 'T'){
                int k = i;
                for(int j = 0 ; j < m ; j++){
                    if(result[k] != '$' && result[k] != str2[j]){
                        return "";
                    }
                    result[k] = str2[j];
                    k++;
                }
            }
        
        }//for putting string in T position
        for(int i = 0 ; i < N ; i++){
            if(result[i] == '$'){
                result[i] = 'a';
                canChange[i] = true;
            }
        }//for putting empty spaces with a
        for(int i = 0 ; i < n ; i++){
            if(str1[i] == 'F'){
                if(issame(result , str2 , i , m)){
                    bool changed = false;
                    for(int k = i + m - 1 ; k >= i ; k--){
                        if(canChange[k] == true){
                            result[k] = 'b';
                            changed = true;
                            break;
                        }
                    }if(!changed){
                    return "";
                    }
                }
            }
        }
        return result;
    }
};