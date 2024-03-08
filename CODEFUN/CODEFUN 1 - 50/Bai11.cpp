#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	double a,b, c, p, s;
	cin >> a >> b >> c;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << fixed << setprecision(6) << s;
}
