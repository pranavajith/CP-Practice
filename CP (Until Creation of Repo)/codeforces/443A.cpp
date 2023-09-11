#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#include <set>

void solve(){
    string s;
    vector <char> vchar;
    getline(cin, s);
    for (char d : s){
        if (count(vchar.begin(),vchar.end(),d)==0){
            if (d!=' ' & d!=',' & d!='{' & d!='}'){
                vchar.push_back(d);
            }
        }
    }
    // for (auto d : vchar){
    //     cout<<d<<" ";
    // }
    // cout<<endl;
    cout<<vchar.size()<<endl;

}

int main() 
{

        solve();
    
    return 0;
}