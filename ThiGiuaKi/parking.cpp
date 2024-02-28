#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double

int main(){
	int x, y, z;
	cin >> x >> y >> z;
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	int s[101] = {0};
	int sum = 0;
	for(int i = a1; i < b1; i++){
		s[i]++;
	}
	for(int i = a2; i < b2; i++){
		s[i]++;
	}
	for(int i = a3; i < b3; i++){
		s[i]++;
	}
	for(int i = 0; i <= 100; i++){
		if(s[i] == 1){
			sum += s[i] * x;
		}else if(s[i] == 2){
			sum += s[i] * y;
		}else if(s[i] == 3){
			sum += s[i] * z;
		}
	}
	cout << sum << endl;
	return 0;
}