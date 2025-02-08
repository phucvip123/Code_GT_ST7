/*
    Author: Nguyễn Văn Phúc
    File name: SoLuongChanLe
    Created at: 2025-02-08 13:55
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
    
    int n,t; cin >> n >> t;
    vi a(n+1);
    for(int i = 1;i<=n;i++) cin >> a[i];
    vi dp(n+1);
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        dp[i] = dp[i-1] + (a[i]%2==0);
    }

    while(t--){
        int l,r; cin >> l >> r;
        int chan = dp[r] - dp[l-1];
        int le = r -l + 1 - chan;
        cout << le << " "<<chan<<endl;
    }
}