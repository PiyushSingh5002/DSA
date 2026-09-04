#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int freq[101] = {-1};
        bool has = false;
        for(auto& x : a){
            freq[a[i]]++;
            if(freq[a[i]] > 1) has = true;
        }
        if(has)cout<<-1<<endl;
        else{
            sort(a.rbegin() , a.rend())
            for(int i = 0 ; i < n ; i ++)cout<<a[i]<<"\n"[i == n - 1];
        }
    }
}