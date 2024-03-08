#include<bits/stdc++.h>
using namespace std;
int res(int a){
    if(a == 2 || a == 1){
        return 1;
    }
    return res( a - 1) + res( a - 2);
}
int main(){
    int n;
    cin >> n;
    cout << res(n);
    return 0;
}