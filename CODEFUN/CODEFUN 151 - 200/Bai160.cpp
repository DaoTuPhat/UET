#include<bits/stdc++.h>
using namespace  std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin >> a[i];
	}
	int res=0;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(a[i] == a[j]){
				res++;
			}
		}
	}
	if(res==4){
		cout << "YES";
	}else{
		cout << "NO";
	}
}
