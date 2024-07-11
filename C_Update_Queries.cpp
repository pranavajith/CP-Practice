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
    int n, m;
    cin >> n >> m;
    string a, b;
    vector<int> ind(m);
    cin >> a;
    set<int> c;
    for(int i = 0; i < m; i ++){
        cin >> ind[i];
        c.insert(ind[i]);
    }
    cin >> b;
    int u = (int) c.size();
    sort(b.begin(), b.end());
    int col = 0;
    for(auto i : c){
        a[i - 1] = b[col];
        col ++;
    }
    cout << a;
    cout<<"\n";
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