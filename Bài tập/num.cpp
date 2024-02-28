#include<bits/stdc++.h>
using namespace std;
bool check(int a[10]){
	for(int i = 1; i <= 5; i++){
		if(a[i] != i){
			return true;
		}
	}
	return false;
}
void output(int a[10]){
	for(int i = 1; i <= 5; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int a[6];
	for(int i = 1; i <= 5; i++){
		cin >> a[i];
	}
	while(check(a)){
		for(int i = 1; i <= 4; i++){
			if(a[i] > a[i+1]){
				swap(a[i], a[i+1]);
				output(a);
			}
		}
	}
	return 0;
}