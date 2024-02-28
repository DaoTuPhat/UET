#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[10];
	for(int i = 1; i <= 8; i++){
		cin >> a[i];
	}
	int cnt1 = 1;
	int cnt2 = 1;
	for(int i = 1; i < 8; i++){
		if(a[i] < a[i+1]){
			cnt1++;
		}else{
			cnt2++;
		}
	}
	if(cnt1 == 8){
		cout << "ascending" << endl;
	}else if(cnt2 == 8){
		cout << "descending" << endl;
	}else{
		cout << "mixed" << endl;
	}
	return 0;
}