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

int a[10];

void init()
{   
    FOR(i, 1, 9)
        cin >> a[i];
}

void solve()
{
    FOR(i, 0, MASK(9) - 1)
        if (C_BIT(i) == 7)
        {
            int sum = 0;
            FOR(j, 0, 8)
                if (BIT(i, j))
                    sum += a[j + 1];
            if (sum == 100)
            {
                FOR(j, 0, 8)
                    if (BIT(i, j))
                        cout << a[j + 1] << '\n';
                return;
            }
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
