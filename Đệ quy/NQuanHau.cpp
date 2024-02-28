#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double

int n, cnt = 0;
int dong[100], cot[100], cheo1[100], cheo2[100];
int bang[100][100];
void print(){
    // int bang[100][100];
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         bang[i][j] = 0;
    //     }
    // }
    // for(int i = 1; i <= n; i++){
    //     bang[i][dong[i]] = 1;
    // }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << bang[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void back(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[i + j - 1] == 0){
            bang[i][j] = 1;
            for(int k = 1; k <= n; k++){
                if(k != j){
                    bang[i][k] = 0;
                }
            }
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 1;
            if(i == n){
                cnt++;
                print();
            }else{
                back(i+1);
            }
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
        }
    }
}
int main(){
    cin >> n;
    back(1);
    cout << cnt << endl;
    return 0;
}