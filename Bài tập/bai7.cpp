#include<bits/stdc++.h>
using namespace std;

int main(){
	int day, month, year, a, b, c, d;
	char x, y;
	cin >> day >> x >> month >> y >> year;
	a = (14 - month) / 12;
	b = year - a;
	c = month + 12 * a -2;
	d = (day + b + b/4 - b/100 + b/400 + (31*c)/12 ) % 7;
	switch(d){
		case 0: cout << "Sunday"; break;
		case 1: cout << "Monday"; break;
		case 2: cout << "Tuesday"; break;
		case 3: cout << "Wednesday"; break;
		case 4: cout << "Thursday"; break;
		case 5: cout << "Friday"; break;
		case 6: cout << "Saturday"; break;		
	}
	return 0;
}