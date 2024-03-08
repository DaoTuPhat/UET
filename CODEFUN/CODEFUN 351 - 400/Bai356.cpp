#include<bits/stdc++.h>
using namespace std;
int main(){
	double a, b, c;
	cin  >> a >> b >> c;
	if(a==0){
		if(b==0){
			if(c==0){
				cout << "Inf";
			}else{
				cout << "NO";
			}
		}else{
			if(c==0){
				cout << "0.00";
			}else{
				cout << fixed << setprecision(2) << -c / b;
			}
		}
	}else{
		double delta = b*b - 4*a*c;
		if(delta > 0 ){
			double x1 = (-b - sqrt(delta)) / (2*a);
			double x2 = (-b + sqrt(delta)) / (2*a);
			if(a > 0){
				cout << fixed << setprecision(2) << x1 << " " << x2;
			}else{
				cout << fixed << setprecision(2) << x2 << " " << x1;
			}
		}else if(delta == 0){
			cout << fixed << setprecision(2) << -b / (2*a); 
		}else{
			cout << "NO";
		}
	}
}
