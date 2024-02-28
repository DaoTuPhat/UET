#include<bits/stdc++.h>
using namespace std;
int n;
int a[10];
int used[10] = {1};
void show(){
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int back(int i){
    if( i == n) {
        show();
    }else{
        for(int j = 0; j <= 1; j++){
           a[i+1] = j;
           back(i+1);
        }
    }
}
int main(){
    cin >> n;
    back(0);
    return 0;
}