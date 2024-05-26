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
    vector<int> a(4);
        for(int i = 0; i < 4; i++)
            cin >> a[i];
        int maxpos = max_element(a.begin(), a.end()) - a.begin();
        int minpos = min_element(a.begin(), a.end()) - a.begin();
        if(maxpos + minpos == 3)
            puts("YES");
        else
            puts("NO");
    
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