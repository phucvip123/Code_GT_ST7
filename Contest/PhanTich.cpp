/*
    Author: Nguyễn Văn Phúc
    File name: PhanTich
    Created at: 2025-01-18 15:42
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
const int mod = 1e9 + 7;
int powz(int a,int b){
    if(b == 0) return 1;

    int res = powz(a,b/2);
    if(b&1){
        return ((a * res)%mod * res)%mod;
    }else return res * res % mod;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int res = 1;
    int n; cin >> n;
    res = powz(2,n-1);
    cout << res<<endl;
}
