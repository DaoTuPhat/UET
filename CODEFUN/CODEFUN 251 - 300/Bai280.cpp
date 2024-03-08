#include<bits/stdc++.h>
using namespace std;
int pascal(int a, int b){
	if(a==0 || a==b){
		return 1;
	}else{
		return pascal(a-1,b-1) + pascal(a,b-1);
	}
	
}
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout << pascal(j,i) << " ";
		}
		cout << endl;
	}
}
