#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int day[n];
	for(int i=0;i<n;i++){
		cin >> day[i];
	}
	int sum = day[0];
	for(int j=1;j<n;j++){
		sum += day[j];
		day[j] = day[j] + day[j-1];
	}
	for(int h=0;h<n;h++){
		if(sum % day[h]==0){
			int tong = day[h];
			int dem=1,check=1;
			for(int k=h;k<n;k++){
				if(day[k] == tong*(1+dem)){
					dem++;
				}else if(day[k] > tong*(1+dem)){
					check = 0;
					break;
				}
			}
			if (check == 1){
				cout << dem;
				break;
			}
		}	
	}
	
}
