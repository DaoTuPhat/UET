#include<bits/stdc++.h>
using namespace std;
bool check(int a, int b){
	if(a < 7){
		return false;
	}else if(a == 7){
		if(b > 5){
			return true;
		}else{
			return false;
		}
	}else{
		return true;
	}
}
int main(){
	int a[7][3];
	for(int i=1;i<=6;i++){
		for(int j=1;j<=2;j++){
			cin >> a[i][j];
		}
	}
	int res=0;
	for(int i=1;i<=6;i++){
		if(check(a[i][1], a[i][2])){
			res++;
		}
	}
	if(res>2){
		cout << ":'(";
	}else{
		cout << ":)";
	}
	return 0;
}
