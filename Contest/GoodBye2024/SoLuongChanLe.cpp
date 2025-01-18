/*
    Author: Nguyễn Văn Phúc
    File name: SoLuongChanLe
    Created at: 2025-01-18 14:43
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

// 	0  	     l     r
// a ->  0 3 4 5 8 2 9 10 13
// b ->  0 1 1 2 2 2 3 3  4
// b -> Số lượng số lẻ tính từ đầu đến phần tử đang xét
//Th đánh số từ 0: l = 0, r = 3;
main()  
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,t; cin >> n >> t;
    vi a(n);// Th2: n + 1 phan tu
    for(int &i: a) cin >> i;
    vi b(n);
    b[0] = a[0]%1;
    for(int i=1;i<n;i++){
        b[i] = b[i-1] + a[i]%2;
    }
    while(t--){ //for(int i=0;i<t;i++)
        int l,r; cin >> l >> r;
        l--;r--;
        int sumOdd = 0;
        int sumEven = 0;
        // if(l > 0) sumOdd = b[r] - b[l-1];
        // else sumOdd = b[r];
        sumOdd = b[r] - b[l] + a[l]%2;// b[r] - b[l-1]
        sumEven = (r - l + 1) - sumOdd;
        cout << sumOdd <<" "<<sumEven<<endl;
    }

}