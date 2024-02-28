#include<bits/stdc++.h>
using namespace std;

int main(){
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	int x, y;
	if(a1 == a2){
		x = a3;
	}else{
		if(a1 == a3){
			x = a2;
		}else{
			x = a1;
		}
	}
	if(b1 == b2){
		y = b3;
	}else{
		if(b1 == b3){
			y = b2;
		}else{
			y = b1;
		}
	}
	cout << x << " " << y;
	return 0;
}