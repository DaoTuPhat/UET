#include<bits/stdc++.h>
using namespace std;
int main(){
	double x0, y0, x1, y1, r;
	cin >> x0 >> y0 >> x1 >> y1 >> r;
	double d = sqrt ( (x1 - x0)*(x1 - x0) + (y1 - y0)*(y1 - y0) );
	if(d <= r){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
