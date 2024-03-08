#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin  >> a >> b >> c;
	if((a+b+c)<15 || a < 4 || b<4 || c<4){
		cout << "Fail";
	}else{
		if(a >= 5 && b>=5 && c>=5){
			cout << "Excellent";
		}else{
			cout << "Medium";
		}
	}
}
