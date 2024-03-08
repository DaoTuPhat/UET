#include<bits/stdc++.h>
using namespace std;
void res1(int n){
	if (n ==0 ) cout << "zero";
	else if(n ==1 ) cout << "one";
	else if(n==2) cout << "two";
	else if(n==3) cout << "three";
	else if(n==4) cout << "four";
	else if(n==5) cout << "five";
	else if(n==6) cout << "six";
	else if(n==7) cout << "seven";
	else if(n==8) cout << "eight";
	else if(n==9) cout << "nine";
	else if(n==10) cout << "ten";
	else if(n==11) cout << "eleven";
	else if(n==12) cout << "twelve";
}
void res2(int n){
	if(n==2) cout << "twent";
	else if(n==3) cout << "thirt";
	else if(n==4) cout << "fort";
	else if(n==5) cout << "fift";
	else if(n==6) cout << "sixt";
	else if(n==7) cout << "sevent";
	else if(n==8) cout << "eight";
	else if(n==9) cout << "ninet";
}
int main(){
	int n;
	cin >> n;
	if(n <= 12){
		res1(n);
		return 0;
	}else if(n < 20){
		res2(n % 10);
		cout << "een";
		return 0;
	}else{
		if(n % 10 ==0){
			res2(n / 10);
			cout << "y";
			return 0;
		}else{
			res2(n / 10);
			cout <<  "y-";
			res1(n % 10);
			return 0;
		}
	}
}
