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
    char c; cin>>c; string s; cin>>s;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
        for (auto d:s){
            ll ind = find(s1.begin(), s1.end(), d) - s1.begin();
            // cout<<ind<<" "
            if (c=='R'){
                cout<<s1[ind-1];
            }
            else{
                cout<<s1[ind+1];
            }
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