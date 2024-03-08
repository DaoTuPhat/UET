#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int longest = 1;
    int current = 1;
    bool increasing = true;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            if (!increasing) {
                current = 1;
            }
            increasing = true;
            current++;
        } else if (a[i] < a[i - 1]) {
            if (increasing) {
                current = 1;
            }
            increasing = false;
            current++;
        } else {
            current = 1;
        }
        longest = max(longest, current);
    }

    cout << longest << endl;

    return 0;
}

