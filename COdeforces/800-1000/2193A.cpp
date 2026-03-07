#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n;
    while(n--){
        int a , b , c;
        cin>>a>>b>>c;
        vector<int> arr(a);
        for(int i = 0 ; i < a ; i++){
            cin>>arr[i];
        }
        int sum = 0;
        for(int i = 0 ; i < a ; i++){
            sum += arr[i];
        }if(sum>b)cout<<"NO"<<"\n";
        else if(sum == b)cout<<"YES"<<"\n";
        else{
            if((b - sum) % c == 0)cout<<"YES"<<"\n";
            else{
                cout<<"NO"<<"\n";
            }
        }
    }return 0;
}