#include<bits/stdc++.h>
using namespace std;

int even(string a , int as){
    int rr = 0;
    for(int i = 0 ; i < as ; i+=2){
        if(a[i] == '1'){
            rr += 1;
        }
    }return rr;
}
int odd(string a , int as){
    int rl = 0;
    for(int i = 1 ; i < as ; i+= 2){
        if(a[i] == '1'){
            rl += 1;
        }
    }return rl;
}
void solve(){
    int n ;
    cin >> n;
    string a , b;
    cin >>a >>b;
    int as = a.length() , ab = b.length();
    int evA = even(a , as);
    int evb = even(b , ab);

    int ovA = odd(a , as);
    int ovB = odd(b , ab);

    if(evA == evb && ovA == ovB){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}