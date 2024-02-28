#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define MASK(i) (1 << i)
#define BIT(mask, i) (mask >> i & 1)
#define BIT_ON(mask, i) (mask | MASK(i))
#define BIT_OFF(mask, i) (mask & ~MASK(i))
#define C_BIT(mask) __builtin_popcount(mask)
#define pb push_back
#define TASK "XHUY"

int n, p[105], a, b;

void init()
{   
    cin >> n;
    FOR(i, 1, n)
        cin >> p[i];
    cin >> a >> b;
}

void solve()
{
    sort(p + 1, p + n + 1);
    if (a % 2 == 0)
        a++;
    if (b % 2 == 0)
        b--;
    int res = 2e9, cur = a;
    FOR(i, 1, n)
        res = min(res, abs(p[i] - a));
    int resB = 2e9;
    FOR(i, 1, n)
        resB = min(resB, abs(p[i] - b));
    if (resB > res)
        res = resB, cur = b;
    FOR(i, 1, n - 1)
    {
        int mid = (p[i] + p[i + 1]) / 2;
        FOR(j, mid - 100, mid + 100)    
            if (j % 2 == 1 && j >= a && j <= b)
            {
                int curRes = 2e9;
                FOR(k, 1, n)
                    curRes = min(curRes, abs(p[k] - j));
                if (curRes > res)
                    res = curRes, cur = j;
            }
    }
    cout << cur;
}   

main()
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
