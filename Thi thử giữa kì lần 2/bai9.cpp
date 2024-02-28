#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;  cin >> n;
    int count = 0;

    for (int a = 1; a <= cbrt(n); ++a) {
        for (int b = a; b <= cbrt(n); ++b) {
            for (int c = a; c <= cbrt(n); ++c) {
                for (int d = c; d <= cbrt(n); ++d) {
                    if (a != b && a != c && a != d && b != c && b != d && c != d && pow(a, 3) + pow(b, 3) == pow(c, 3) + pow(d, 3)) {
                        cout << pow(a, 3) + pow(b, 3) << " ";
                    }
                }
            }
        }
    }

    return 0;
}