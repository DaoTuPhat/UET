#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	getline(cin ,a);
	getline(cin ,b);
	int count[255] = {0};
	int result = 0;
	for(int i=0;i<a.length();i++){
		count[a[i]]++;
	}
	for(int i=0;i<b.length();i++){
		if(count[b[i]]!=0){
			result ++;
		}
	}
	cout << result ;
}
