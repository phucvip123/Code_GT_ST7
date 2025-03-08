/*
    Author: Nguyễn Văn Phúc
    File name: FileName
    Created at: 2025-03-08 15:23
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

vi snt = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,  
    31, 37, 41, 43, 47, 53, 59, 61, 67, 71,  
    73, 79, 83, 89, 97, 101, 103, 107, 109, 113,  
    127, 131, 137, 139, 149, 151, 157, 163, 167, 173,  
    179, 181, 191, 193, 197, 199, 211, 223, 227, 229,  
    233, 239, 241, 251, 257, 263, 269, 271, 277, 281,  
    283, 293, 307, 311, 313, 317, 331, 337, 347, 349,  
    353, 359, 367, 373, 379, 383, 389, 397, 401, 409,  
    419, 421, 431, 433, 439, 443, 449, 457, 461, 463,  
    467, 479, 487, 491, 499, 503, 509, 521, 523, 541
};
int ans = 9e18+ 8e17;
int k;
void backTrack(int id,__int128_t res, int uoc){
    if(uoc > k) return;
    if(uoc == k){
        ans = min(ans,(int)res);
    }
    for(int i=1;;i++){
        if(res * snt[id] > ans) break;
        res *= snt[id];
        backTrack(id+1,res,uoc * (i + 1));
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> k;
    backTrack(0,1,1);
    cout << ans << endl;
}