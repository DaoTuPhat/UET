#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >>c;
	if(a-b==c || b-a==c || b-c==a || c-b==a || a-c==b || c-a==b){
		cout << "-";
	}else{
		cout << "0";
	}
}
