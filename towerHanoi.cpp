/*
    Author: Nguyễn Văn Phúc
    File name: FileName
    Created at: 2025-01-11 14:55
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

void Move(int n,char from,char hepler,char to){
    //cow sowr
    if(n == 0) return;
    Move(n-1,from,to,hepler);
    cout << n <<" "<<from <<" -> "<<to<<endl;
    Move(n-1,hepler,from,to);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n = 3;
    Move(n,'A','B','C');
}