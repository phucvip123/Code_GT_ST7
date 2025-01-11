/*
    Author: Chu Việt Anh
    File name: FileName
    Created at: 2025-01-10 19:16
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

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin>>n;
    vi a(n);
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        cin>>a[i];
    }
    
    cin>>m;
    vi b(m);
    for (int i = 0; i < b.size(); i++)
    {
        /* code */
        cin>>b[i];
    }
    int l=1;
    int r = 1e9;
    int ans = 0;
    while (l<=r){
        int mid = (l+r)/2;
        //Check 
        bool flag = true;
        int t1,t2; t1 = t2 =0;
        while(t1 < n){
            if(a[t1] >= mid){
                t1++;
                continue;
            }
            while(t2 <m && a[t1] + b[t2] < mid) t2++;

            if(t2 >= m){
                flag = false;
                break;
            }else{
                t1++; t2++;
            }
        }

        if(flag){
            l = mid + 1;
            ans = max(ans,mid);
        }else{
            r = mid -1;
        }
    }
    cout<<ans<<endl;
}