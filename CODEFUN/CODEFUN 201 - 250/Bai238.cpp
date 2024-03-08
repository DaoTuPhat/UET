#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
	cin >> n;
    int k = 'a' + 'z';
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	char b[n];
	for(int i = 0; i < n; i++){
		if(a[i] == 27){
			b[i] = ' ';
		}else{
			b[i] = a[i] + 'a' - 1;
		}
	}
    for(int i = 0; i < n; i++){
        if(b[i] != ' '){
            b[i] = k - b[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(b[i] != ' '){
            if(b[i] >= 'd'){
                b[i] = b[i] - 3;
            }else{
                b[i] = b[i] + 'x' - 'a';
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << b[i];
    }
    return 0;
}