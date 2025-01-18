/*
    Author: Nguyễn Văn Phúc
    File name: Sudoku
    Created at: 2025-01-11 15:11
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


/*
    x = 3; y=3;
    i = 4; j = 4;
*/
int c = 0;
int n = 9;
//Để kiểm tra vị trí i,j có hợp lệ hay không
bool check(int matrix[][9],int i,int j){
    
    int h = matrix[i][j];
    //Duyet chu thap
    for(int k = 0;k<9;k++){
        c++;
        if((matrix[i][k] == h && k != j) || (matrix[k][j] == h && k != i)){
            return false;
        }
    }
    //Duuyet o vuong
    int x = i - i % 3; // i/3 * 3
    int y = j - j % 3;// j/3 * 3

    for(int i1 = x;i1 < x + 3;i1++){
        for(int j1 = y;j1 < y + 3;j1++){
            c++;
            if(matrix[i1][j1] == h && i1  != i && j1 != j){
                return false;
            }
        }
    }
    return true;

}
// i là hàng, j là cột
bool solve(int matrix[][9],int i,int j){
    //phan co so
    if(i == n) return true;
    if(j >= n ){
        j = 0;
        i++;
    }
    // phan quay lui

    if(matrix[i][j] != 0){
        return solve(matrix,i,j+1);
    }else{
        for(int k = 1;k<=9;k++){
            c++;

            matrix[i][j] = k;
            if(check(matrix,i,j)){
                int ans = solve(matrix,i,j+1);
                if(ans) return true;
            }
        }
        matrix[i][j] = 0;
    }
    return false;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int matrix[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++) cin >> matrix[i][j];
    }
    if(solve(matrix,0,0)){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << c<<endl;
    }else{
        cout << "NO Solution\n";
    }
}