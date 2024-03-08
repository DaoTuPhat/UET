#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin ,s);
	int k = s.length();
	int a[k];
	for(int i=0;i<k;i++){
		a[i] = s[i]-48;
	}
	sort(a , a + k);
	for(int i=k-1;i>=0;i--){
		cout << char(a[i]+48);
	}
	cout << endl;
	int x = -1;
	for(int i=0;i<k;i++){
		if(a[i] != 0){
			x = i;
			break;
		}
	}
	if(x == -1){
		return 0;
	}else{
		cout << char(a[x]+48);
		for(int i=0;i<k;i++){
			if(i != x){
				cout << char(a[i]+48);
			}
		}
	}	
}
