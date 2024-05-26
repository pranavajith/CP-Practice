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
    string s; cin>>s;
    if (stoi(s) % 7 == 0) cout<<s<<"\n";
    else {
    for (char c = '1'; c<='9'; c++){
        string temp = s; temp[s.size()-1] = c;
        // cout<<temp<<"\n";
        if (stoll(temp) % 7 == 0) {
            cout<<temp<<"\n";
            return;
        }
    }
    }
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