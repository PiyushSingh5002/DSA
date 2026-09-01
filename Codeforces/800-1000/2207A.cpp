#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int minOnes = 0, maxOnes = 0;
        int i = 1 ;
        int count1 = 0 , count0 = 0;
        int one  = 0;
        s[0] == '1' ? one+= 1 : one += 0;
        s[n - 1] == '1' ? one+=1 : one+=0;
        while(i < n - 1){
            if(s[i - 1] == '1' && s[i + 1] == '1'){
                if(s[i] == '0')count0++;
                else{
                    count1++;
                    one++;
                }
            }
            i++;
        }
        minOnes = 

        cout << minOnes << " " << maxOnes << "\n";
    }
}