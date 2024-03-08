#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	cin.ignore();
	string a;
	getline(cin , a);
	string b;
	getline(cin , b);
	a.erase(remove(a.begin(), a.end(), ' '), a.end());
	b.erase(remove(b.begin(), b.end(), ' '), b.end());
	int k = max(a.length(),b.length())+1;
	while(a.length() < k){
		a = '0' + a;
	}
	while(b.length() < k){
		b = '0' + b;
	}
	int s[k];
	for(int i=k-1;i>=0;i--){
		if(a[i]-48 + b[i]-48 >=10){
			s[i] = (a[i]-48 + b[i]-48) % 10;
			a[i-1]++;
		}else{
			s[i] = a[i]-48 + b[i]-48;
		}
	}
	if(s[0] == 0){
		for(int i=1;i<k;i++){
			if(i % 50 == 1 && i > 1){
				cout << endl;
			}
			cout << s[i];
		}
	}else{
		for(int i=0;i<k;i++){
			if(i % 50 == 0 && i > 1){
				cout << endl;
			}
			cout << s[i];
		}
	}
}
