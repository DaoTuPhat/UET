#include<bits/stdc++.h>
using namespace std;
int main(){
	double v1, v2, tt, d;
	cin >> v1 >> v2 >> tt >> d;
	if(v1 >= v2){
		cout << "INF";
	}else{
		double t1 = (v1*tt) / (v2 - v1);
		double t2 = d / v2;
		double t3 = (d / v1) - tt;
		cout << int(abs(t1-min(t2,t3)));
	}
}
