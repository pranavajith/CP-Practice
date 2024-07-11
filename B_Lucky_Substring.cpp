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
     string s;
    cin >> s;
    int f = 0, se = 0;
    for(int i = 0; i < s.length();i++){
        if(s[i] == '4'){f++;}
        else if(s[i] == '7'){se++;}
    }
    if(se == 0 && f == 0){
        cout << -1;
    }else if(f >=se){
        cout << 4;
    }else{
        cout << 7;
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}