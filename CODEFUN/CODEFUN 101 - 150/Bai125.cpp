#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c;
	cin >> a >> b >> c;
	float delta = b*b - 4*a*c;
	if(a==0){
		if(b==0 && c!=0){
			cout << "No solution";
		}else if(b!=0){
			cout << fixed<<setprecision(2)<<-c/b;
		}
	}else{
		if(delta<0){
			cout << "No solution";
		}else if(delta == 0){
			cout <<fixed<<setprecision(2)<< -b/(2*a);
		}else{
			cout <<fixed<<setprecision(2)<< (-b-sqrt(delta))/(2*a) << " " << (-b+sqrt(delta))/(2*a);
		}
	}
}
