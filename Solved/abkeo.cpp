/*
    Author: Nguyễn Văn Phúc
    File name: Ankeo
    Created at: 2025-01-11 14:12
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
// n = 2
// 11, 00,10,01
int n = 2;
string curS;
void genTest(int pos){
    //phan co so
    if(pos > n){
        cout << curS<<endl;
        return;
    }
    //phan quay lui
    //string la vector<char>
    curS.push_back('0');
    genTest(pos + 1);
    curS.pop_back();

    curS.push_back('1');
    genTest(pos + 1);
    curS.pop_back();
    
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    genTest(1);

}