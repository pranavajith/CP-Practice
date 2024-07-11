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
    int n, x; // 2 3
    cin >> n >> x;
    int current = 1, watch = 0;
    for (int i = 0; i < n; ++i)
    {
        int a, b; // 5 6
        cin >> a >> b;
        while ((current + x) <= a) // 4
        {
            current += x;
        }
        watch += b - current + 1; // 6-4
        current = b + 1;
    }
    cout << watch;
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