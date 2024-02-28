#include<bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	stringstream ss(a);
	int h1, m1, s1, h2, m2, s2;
	h1 = (a[0] - '0')*10 + (a[1] - '0');
	m1 = (a[3] - '0')*10 + (a[4] - '0');
	s1 = (a[6] - '0')*10 + (a[7] - '0');
	h2 = (b[0] - '0')*10 + (b[1] - '0');
	m2 = (b[3] - '0')*10 + (b[4] - '0');
	s2 = (b[6] - '0')*10 + (b[7] - '0');
	int x, y, z;
	x = s2 - s1;
	y = m2 - m1;
	z = h2 - h1;
	if(x == 0 && y == 0 && z == 0){
		cout << "24:00:00" << endl;
		return 0;
	}
	if(x < 0){
		x += 60;
		y--;
	}
	if(y < 0){
		y += 60;
		z--;
	}
	if(z < 0){
		z += 24;
	}
	cout << setw(2) << setfill('0') << z << ":";
	cout << setw(2) << setfill('0') << y << ":";
	cout << setw(2) << setfill('0') << x;
	return 0;
}