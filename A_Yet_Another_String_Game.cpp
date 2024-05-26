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
    string S;
        cin >> S;
    for (int i = 0; i < (int)S.length(); i++) {
        if (i & 1) {
            if (S[i] == 'z') S[i] = 'y';
            else S[i] = 'z';
        } else {
            if (S[i] == 'a') S[i] = 'b';
            else S[i] = 'a';
        }
    }
    cout << S << endl;
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