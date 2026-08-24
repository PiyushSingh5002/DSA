#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string num;
    cin >> num;
    int dot = num.find('.');
    string intt = num.substr(0 , dot);
    string frac = num.substr(dot+1);
    if(intt[intt.length() - 1] == '9'){
        cout<<"GOTO Vasilisa."<<endl;
    }
    else if(frac[0] < '5'){
        cout<<intt<<endl;
    }else{
        intt[intt.length() - 1]++;
        cout<<intt<<endl;
    }
    return 0;
}