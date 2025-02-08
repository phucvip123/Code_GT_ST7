/*
    Author: Nguyễn Văn Phúc
    File name: Fibo
    Created at: 2025-02-08 13:42
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
    int dp[1000];
    memset(dp,0,sizeof(dp));// set toàn bộ phần tử của dp = 0;
    dp[1] = dp[2] = 1;
    for(int i=3;i<100;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    for(int i = 1;i<10;i++){
        cout << dp[i] << endl;
    }
}