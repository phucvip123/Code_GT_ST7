/*
    Author: Nguyễn Văn Phúc
    File name: LamTac
    Created at: 2025-01-19 12:22
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

bool check(const vi &a,const int x,const int &L){
    int sum = 0;
    for(int i : a){
        if(i > x) sum += i - x; 
    }
    return sum >= L;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,L; cin >> n >> L;
    vi a(n);
    for(int &i : a) cin >> i;
    int l =0,r=1e18;
    int ans = 0;
    while(l <= r){
        int mid = l + r >> 1;
        if(check(a,mid,L)){
            l = mid + 1;
            ans = max(ans,mid);
        }else{
            r = mid - 1;
        }
    }
    cout << ans << endl;
}