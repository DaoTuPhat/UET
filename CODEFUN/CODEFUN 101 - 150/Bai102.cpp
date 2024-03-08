#include<bits/stdc++.h>
using namespace std;
int main(){
	int day[4];
	for(int i=0;i<4;i++){
		cin >> day[i];
	}
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(day[i] > day[j]){
				int max=day[i];
				day[i]=day[j];
				day[j]=max;
			}
		}
	}
	cout << day[1];
}
