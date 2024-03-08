#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n = 'a' + 'z';
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            s[i] = n - s[i];
        }
    }
    for(int i = 0; i < s.length(); i++){
        cout << s[i];
    }
    return 0;
}