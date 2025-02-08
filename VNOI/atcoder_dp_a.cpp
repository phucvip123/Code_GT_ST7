/*
    Author: Nguyễn Văn Phúc
    File name: atcoder_dp_a
    Created at: 2025-02-08 15:10
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

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //Input
    int n; cin >> n;
    vi a(n);
    for(int &i : a) cin >> i;
    //Khoi tao dp
    vi dp(n);
    dp[0] = 0;
    dp[1] = abs(a[0] - a[1]);

    for(int i=2;i<n;i++){
        //m1 - nhay tu o i-1
        //m2 - nhay tu o i-2
        int m1 = dp[i-1] + abs(a[i] - a[i-1]);
        int m2 = dp[i-2] + abs(a[i] - a[i-2]);

        dp[i] = min(m1,m2);
    }
    cout << dp.back();
}