#include<bits/stdc++.h>
using namespace std;
int main(){
	int chan =0 ,le=0;
	int day[5];
	for(int i=0; i<5;i++){
		cin >> day[i];
	}
	for(int j=0;j<5;j++){
		if(day[j] % 2 ==0){
			chan++;
		}else{
			le++;
		}
	}
	if(chan==4 || le==4){
		cout << "1";
	}else{
		cout << "0";
	}
}
