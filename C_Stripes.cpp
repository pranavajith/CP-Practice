#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    vector  <string> v(8);
    string s, s1, s2;
    for (int i=0; i<8; i++){
        cin>>s;
        s1+=s;
    }
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            s2+=v[j][i];
        }
    }
    if (s1.find("RRRRRRRR") != string::npos || s2.find("RRRRRRRR") != string::npos) cout<<"R\n";
    else cout<<"B\n";

    // for (int i=0; i<8; i++){
    //     if (count(v[i].begin(), v[i].end(), v[i][0]) == 8 && v[i][0] != '.'){
    //         cout<<v[i][0]<<"\n";
    //         return;
    //     }
    // }
    // for (int i=0; i<8; i++){
    //     bool check = true;
    //     if (v[0][i] == '.')continue;
    //     for (int j=1; j<8; j++){
    //         if (v[j][i] != v[j][i-1]){
    //             check = false;
    //             break;
    //         }
    //     }
    //     if (check){
    //         cout<<v[0][i]<<"\n";
    //         return;
    //     }
    // }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}