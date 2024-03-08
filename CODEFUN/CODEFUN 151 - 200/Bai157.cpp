#include<bits/stdc++.h>
using namespace std;
int main(){
	int day[5];
	for(int i=0;i<5;i++){
		cin >> day[i];
	}
	for(int j=0;j<4;j++){
		int dem=0;
		for(int k=j+1;k<5;k++){
			if(day[j]-day[k] == 0){
				dem ++;
			}
		}
		if(dem==2){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
