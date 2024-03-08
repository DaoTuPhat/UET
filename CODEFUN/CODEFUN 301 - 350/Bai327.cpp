#include<bits/stdc++.h>
using namespace std;
int res(int a, int b){
    if( a == 0 || a == b){
        return 1;
    }
    return res(a-1, b - 1) + res(a, b - 1);
}
int main(){
    int n;
    cin >> n;
    if( n == 1){
        cout << "1";
        return 0;
    }
    int sum = 0;
    for(int i = 0; i <= n - 2; i++){
        sum += res(i , n - 2);
    }
    cout << sum;
    return 0;
}