/*
    Author: Nguyễn Văn Phúc
    File name: Conbo
    Created at: 2025-01-18 15:13
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

// a -> 1 2 4 5 7 | mid = 3 | c = 3;
// Step 1: Old = 1(a[0]), cnt = 1;
// Step 2: Old = 4, cnt = 2
// Step 3: Old = 3, cnt = 3

bool check(const vi &a,const int &x,const int &c){
    int n = a.size();
    int cnt = 1;int old = a[0];//Step 1
    for(int i=1;i<n;i++){
        if(a[i] - old >= x){
            old = a[i];
            cnt++;
        }
        if(cnt == c) return true;
    }
    return cnt >= c;
    

}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,c; cin >> n >> c;
    vi a(n);
    for(int &i : a) cin >> i;

    sort(a.begin(),a.end());// sort(a,a+n);
    int ans = 0;
    int l = 0,r=1e18;
    while(l <= r){
        int mid = (l + r)/2; //(l+r) >> 1, 2 << 2;
        if(check(a,mid,c)){
            l = mid + 1;
            ans = max(ans,mid);
        }else{
            r = mid - 1;
        }
    }

    cout << ans << endl;
}