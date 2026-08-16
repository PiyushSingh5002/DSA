#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin >> s;
        int county = 0;
        for(auto &a : s){
            if(a == 'Y'){
                county += 1;
            }
        }
        if(county >= 2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }  
    }
    return 0;
}