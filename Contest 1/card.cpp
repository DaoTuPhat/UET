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

int r, c;
char ch[205][205];

void init()
{   
    cin >> r >> c;
    FOR(i, 1, r)
        FOR(j, 1, c)
            cin >> ch[i][j];
}

void solve()
{
    FOR(i, 1, r)
        FORD(j, c * 2, c + 1)
            ch[i][j] = ch[i][c * 2 - j + 1];
    FORD(i, r * 2, r + 1)
        FOR(j, 1, c * 2)
            ch[i][j] = ch[r * 2 - i + 1][j];
    int a, b;
    cin >> a >> b;
    if (ch[a][b] == '#')   
        ch[a][b] = '.'; else ch[a][b] = '#';
    FOR(i, 1, r * 2)
    {
        FOR(j, 1, c * 2)
            cout << ch[i][j];
        cout << "\n";
    }
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
