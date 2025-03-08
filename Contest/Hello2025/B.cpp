/*
    Author: Nguyễn Văn Phúc
    File name: B
    Created at: 2025-03-08 14:17
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
    
    int n,k;
    cin >> n >> k;
    vi a(n + 1); a[0] = 0;
    for(int i =1;i<=n;i++) cin >> a[i];

    vi pre(n + 1);pre[0] = 0;
    int ans = 0;
    unordered_map<int,int> track;//track[0] = 1;
    track[0] = 0;
    for(int i=1;i<=n;i++){
        pre[i] = a[i] + pre[i-1];

        //Thuat toan 2
        //OlogN
        if(track[pre[i]] == 0){
            track[pre[i]] = i;
        }

        int x = pre[i] - k;
        if(track[x] != 0){
            ans = max(ans, i - track[x]); 
        }
        
        //Thuat toan 1
        // for(int j=0;j<i;j++){
        //     if(pre[i] - pre[j] == k){
        //         ans = max(ans,i - j);
        //         break;
        //     }
        // }

    }
    cout << ans <<endl;
}