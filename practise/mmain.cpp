#include<iostream>

using namespace std;

int findmaxsum(int arr[] , int s){
    int m = INT_MIN;
    for(int i = 0 ; i < s ; i++){
        for(int j = i + 1 ; j < s ; j++){
            int num = arr[i] * arr[j];
            if(num > m){
                m = num;
            }
        }
    }
    return m;
}

int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5 };
    cout<< findmaxsum(arr , 5);
    return 0;
}