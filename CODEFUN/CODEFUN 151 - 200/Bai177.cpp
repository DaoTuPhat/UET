#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long t = 1;
	int cnt=1;
	while( t % n != 0){
		t = (t*10 + 1) % n;
		cnt++;
	}
	for(int i = 0;  i < cnt; i++){
		cout << "1";
	}
	return 0;
}
