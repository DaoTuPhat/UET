#include<bits/stdc++.h>
using namespace std;
int res(int a, int b, int s[]){
    if(a == (b - 1) || a == b){
        return 1;
    }
    if(s[a] <= a + 1){
        return res( a + 1, b, s);
    }
    return res(a + 1, b, s) + res( s[a], b, s);
}
int main(){
    int n;
    cin >> n;
    int s[n];
    for(int i = 1; i < n; i++){
        cin >> s[i];
    }
    cout << res(1, n, s);
    return 0;
}