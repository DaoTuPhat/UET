#include<bits/stdc++.h>
using namespace std;
int main(){
	int x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	float a1 = x2 - x1;
	float a2 = y2 - y1;
	float b1 = x3 - x1;
	float b2 = y3 - y1;
	if(a1/a2 == b1/b2){
		cout << "1";
	}else{
		cout << "0";
	}
}
