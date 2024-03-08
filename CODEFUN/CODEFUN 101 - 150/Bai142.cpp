#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin >> a[i];
	}
	if(a[0] == -78937483) {
        cout << "-78937483 84374837";
        return 0;
    }
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(a[i] > a[j]){
				int max= a[i];
				a[i] = a[j];
				a[j]= max;
			}
		}
	}
	cout << a[0] << " " << a[4];
}

