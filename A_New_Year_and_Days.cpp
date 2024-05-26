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
    int x; cin>>x;
    string s; cin>>s; cin>>s;
    if (s == "week"){
        if (x == 5 || x == 6) cout<<53<<"\n";
        else cout<<52<<"\n";
    }
    else {
        if (x <= 29) cout<<"12\n";
        else if (x <= 30) cout<<"11\n";
        else cout<<"7\n";
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