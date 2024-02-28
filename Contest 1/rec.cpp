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

int x[3], y[3];

void init()
{   
    FOR(i, 0, 2)
        cin >> x[i] >> y[i];
}

void solve()
{
    FOR(i, 0, 2)
        FOR(j, 0, 2)
        {
            bool check = 1;
            FOR(k, 0, 2)
                if (x[i] == x[k] && y[j] == y[k])
                    check = 0;
            if (check)
            {
                cout << x[i] << " " << y[j];
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
