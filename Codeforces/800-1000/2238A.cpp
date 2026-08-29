#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<long long> a(n), b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        long long suma = 0;
        long long sumb = 0;
        bool d = false;
        for(int i = 0 ; i < n ; i++){
            if(a[i] < b[i]) d = true;
            suma += a[i];
            sumb += b[i];
        }
        if(!d){
            cout<<suma - sumb<<endl;
            continue;
        }
        else{
            sort(a.begin() , a.end());
            sort(b.begin() , b.end());
        }
        bool dd = false;
        for(int i = 0 ; i < n ; i++){
            if(a[i] < b[i]){
                dd = true;
                break;
            }
        }if(dd){
            cout<<-1<<endl;
        }else{
            cout<<(suma - sumb) + c<<endl;
        }
    }
}