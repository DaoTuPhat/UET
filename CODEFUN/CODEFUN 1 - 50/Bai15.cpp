#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    cout << s << string(s.rbegin(), s.rend());
    return 0;
}
