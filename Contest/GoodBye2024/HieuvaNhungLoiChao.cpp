#include<bits/stdc++.h>
using namespace std;
int main(){
    std::string s;
    getline(cin,s);
    bool flag = false;
    for(int i=0;i<s.size() - 3;i++){
        string tmp = s.substr(i,4);
        if(tmp =="2024"){
            flag = true;
            break;
        }
    }
    if(flag) cout << "Yes\n";
    else cout << "No\n";

}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    std::string s;
    getline(cin,s);
    if(s.find("2024") != string::npos){
        cout <<"Yes\n";
    }else{
        cout << "No\n";
    }

}

*/