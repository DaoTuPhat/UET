#include<bits/stdc++.h>
using namespace std;
int main(){
	int d1, r1, d2, r2;
	cin >> d1 >> r1 >> d2 >> r2;
	if(d1 == d2 || d1 == r2 || r1==d2 || r1==r2){
		cout << "1";
	}else{
		cout << "0";
	}
	return 0;
}
