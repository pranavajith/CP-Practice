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
    for(int i=1; i<(s.size()-1); i++){
        if(s[i]!=s[i-1] && s[i]!=s[i+1] && s[i+1]!=s[i-1] && s[i-1]!='.' && s[i]!='.' && s[i+1]!='.'){
            cout << "Yes";
            return;
        }
    }
    cout << "No";
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