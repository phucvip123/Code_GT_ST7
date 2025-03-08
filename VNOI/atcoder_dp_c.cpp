/*
    Author: Nguyễn Văn Phúc
    File name: atcoder_dp_c
    Created at: 2025-02-08 15:56
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define di deque<int>
#define endl '\n'
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define print1(a)    \
    for (auto x : a) \
    cout << x.F << " " << x.S << endl
#define print2(a, x, y)         \
    for (int i = x; i < y; i++) \
        cout << a[i] << " ";    \
    cout << endl
#define no "NO\n"
#define yes "YES\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vvi a(2, vi(3));
    vvi dp(2, vi(3));
    int u = 0, v = 1;
    cin >> a[u][0] >> a[u][1] >> a[u][2];
    dp[u] = a[u];
    if(n == 1){
        int ans = *max_element(all(dp[u]));
        cout << ans << endl;
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        cin >> a[v][0] >> a[v][1] >> a[v][2];
        for (int k = 0; k < 3; k++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j == k)
                    continue;
                int m = dp[u][j] + a[v][k];
                dp[v][k] = max(dp[v][k], m);
            }
        }
        a[u] = a[v];
        dp[u] = dp[v];
    }

    int ans = *max_element(all(dp[v]));
    cout << ans << endl;
}