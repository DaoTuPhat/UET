// in ra so fibonaci thu n
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, f1=1, f2=1,f3;
	cin  >> n;
	for(int i=3;i<=n; i++){
		f3= f2 + f1;
		f1=f2;
		f2=f3; 
	}
	cout << f3;
}
/* Cach 2

#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
	long long fibo[n];
	fibo[0]=1;
	fibo[1]=1;
	for(int i=2;  i <= n-1; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	cout << fibo[n-1];
}
int main(){
	int n;
	cin >> n;
	fibo(n);
	
}

