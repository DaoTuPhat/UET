#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	int k = sqrt(n);
	if(k*k == n){
		return true;
	}else{
		return false;
	}
}
int main(){
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 1; i <=  500; i++){
		int a = i*i + n;
		if(a <= 250000){
			if(check(a)){
				cnt++;
			}
		}else{
			break;
		}
	}
	cout << cnt << endl;
	return 0;
}