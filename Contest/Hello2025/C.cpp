/*
    Author: Nguyễn Văn Phúc
    File name: FileName
    Created at: 2025-03-08 14:57
*/

#include <bits/stdc++.h>
using namespace std;
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
    
    int n; cin >> n;
    vi a(n);
    for(int &i : a) cin >> i;

    vi b = a;
    sort(all(b));
    auto it = unique(all(b));
    b.erase(it,b.end());
    vi mp(n + 1,0);
    for(int &i : a){
        i = (lower_bound(all(b),i) - b.begin());
        mp[i]++;
    }
    for(int i : a) cout << mp[i] <<" ";
}