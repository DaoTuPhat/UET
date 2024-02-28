#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define MASK(i) (1 << i)
#define BIT(mask, i) (mask >> i & 1)
#define BIT_ON(mask, i) (mask | MASK(i))
#define BIT_OFF(mask, i) (mask & ~MASK(i))
#define C_BIT(mask) __builtin_popcount(mask)
#define pb push_back
#define TASK "XHUY"

int h, m, s, H, M, S;

void init()
{   
    string a, b;
    cin >> a >> b;
    h = (a[0] - '0') * 10 + a[1] - '0';
    m = (a[3] - '0') * 10 + a[4] - '0';
    s = (a[6] - '0') * 10 + a[7] - '0';
    H = (b[0] - '0') * 10 + b[1] - '0';
    M = (b[3] - '0') * 10 + b[4] - '0';
    S = (b[6] - '0') * 10 + b[7] - '0';
}   

void solve()
{
    if (h == H && m == M && s == S)
    {
        cout << "24:00:00";
        return;
    }
    s = S - s;
    m = M - m;
    h = H - h;
    if (s < 0)
    {
        s += 60;
        m--;
    }
    if (m < 0)
    {
        m += 60;
        h--;
    }
    if (h < 0)
        h += 24;
    if (h < 10)
        cout << "0";
    cout << h << ":";
    if (m < 10)
        cout << "0";
    cout << m << ":";
    if (s < 10)
        cout << "0";
    cout << s;
}   

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    if (fopen(TASK".INP", "r"))
    {
        freopen(TASK".INP", "r", stdin);
        freopen(TASK".OUT", "w", stdout);
    }
    init();
    solve();
    return 0;
}
