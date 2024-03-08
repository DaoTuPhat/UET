#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		float n;
		cin >> n;
		if(n<0 || n>10){
			cout << "-1"<<endl;
		}else{
			if(n>=9){
				cout << "A+"<<endl;
			}else if(n>=8){
				cout << "A"<<endl;
			}else if(n>=7){
				cout << "B"<<endl;
			}else if(n>=6){
				cout << "C"<<endl;
			}else if(n>=5){
				cout << "D"<<endl;
			}else{
				cout << "E"<<endl;
			}
		}
	}
}

