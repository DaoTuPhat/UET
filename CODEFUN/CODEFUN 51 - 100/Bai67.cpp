#include<bits/stdc++.h>
using namespace std;
int check(int n){
	int cnt=0;
	for(int i=5; i<= n; i+=5){
		int x = i;
		while(x % 5 ==0){
			cnt++;
			x /= 5;
		}
	}return cnt ;
}
int main(){
	long long  n;
	cin >> n;
	cout << check(n);
}
