#include<bits/stdc++.h>
using namespace std;

int check(long long n){
	if (n==0 || n==1){
		return 1;
	}
	long long f1,f2,fn;
	f1=1 ; f2 =1;
	for(int i=1; i<=93;i++){
		fn = f1 + f2;
		if(fn == n){
			return 1;
		}
		f1=f2;
		f2=fn;
	}return 0;
}

int main(){
	long long n;
	cin >> n;
	if(check(n)){
		cout << "YES";
	}else {
		cout << "NO";
	}
}

/* Cach 2
#include<bits/stdc++.h>
using namespace std;
long long fb[100];
void kt(){
	fb[0]=0;
	fb[1]=1;
	for(int i=2; i<=92; i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
}
int main(){
	long long n;
	cin >> n;
	kt();
	for (int i=0; i<=92; i++){
		if( fb[i] == n){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
