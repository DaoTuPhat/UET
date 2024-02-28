#include<bits/stdc++.h>
using namespace std;
int n;
int a[10];
int used[10];
void show(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int back(int i){
	if(i == n){
		show();
	}else{
		for(int j = 1; j <= n; j++){
			if(! used[j]){
				a[i+1] = j;
				used[j] = 1;
				back(i+1);
				used[j] = 0;
			}
		}
	}
}
int main(){
	cin >> n;
	back(0);
	return 0;
}