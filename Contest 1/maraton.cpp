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

char s[35][35];
int n;

void init()
{   
    cin >> n;
    FOR(i, 1, n)
        FOR(j, 1, n)
            cin >> s[i][j]; 
}

void solve()
{
    FOR(i, 1, n - 2)
        FOR(j, 1, n)
            if (s[i][j] != '.')
            {
                bool check1 = true, check2 = true, check3 = true, check4 = j > 2;
                FOR(x, i, i + 2)    
                    if (s[x][j] != s[i][j])
                        check1 = false;
                FOR(x, j, j + 2)
                    if (s[i][x] != s[i][j])
                        check2 = false;
                FOR(x, 1, 2)
                    if (s[i + x][j + x] != s[i][j])
                        check3 = false;
                if (j > 2)
                    FOR(x, 1, 2)
                        if (s[i + x][j - x] != s[i][j])
                            check4 = false;
                if (check1 || check2 || check3 || check4)
                    cout << s[i][j], exit(0);
            }
    cout << "ongoing";
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
