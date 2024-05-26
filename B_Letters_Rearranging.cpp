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

bool isPali(string s){
    for (int i=0; i<s.size()/2; i++){
        if (s[i] != s[s.size()-1-i]) return false;
    }
    return true;
}

void solve(){
    string s; cin>>s;
    if (!isPali(s)) {
        cout<<s<<"\n";
        return;
    }
    int iter = 1;
    while (iter < s.size()){
        if (s[iter] != s[0]) break;
        iter++;
    }
    if (iter == s.size()) cout<<"-1\n";
    else {
        swap(s[0], s[iter]);
        cout<<s<<"\n";
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