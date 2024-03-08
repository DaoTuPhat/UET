#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int s[501][501];
    int p[501][501] = {0};
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cin >> s[i][j];
            p[i][j] = s[i][j] + p[i-1][j] + p[i][j-1] - p[i-1][j-1];
        }
    }
    for(int i=1;i<=a;i++){
    	for(int j=1;j<=b;j++){
    		cout << p[i][j] << " ";
		}
		cout << endl;
	}
    int res=0;
    for(int i=c;i<=a;i++){
        for(int j=c;j<=b;j++){
            int sum = p[i][j] - p[i-c][j] - p[i][j-c] + p[i-c][j-c];
            res = max(res, sum);
        }
    }
    cout << res;
}

