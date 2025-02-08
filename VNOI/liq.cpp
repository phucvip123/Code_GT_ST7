/*
    Author: Nguyễn Văn Phúc
    File name: LIQ
    Created at: 2025-02-08 14:54
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

    vi dp(n,1);// Dp với các phần tử mặc định là 1
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j] >= a[i]) continue;
            dp[i] = max(dp[i],dp[j] + 1);
        }
    }
    int ans = *max_element(all(dp));
    cout << ans << endl;
}