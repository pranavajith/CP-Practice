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
    int n, k;
        cin >> n >> k;
 
        if (k == 1) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 1; j <= k; j++) {
                    cout << i + 1 << endl;
                }
            }
        } else {
            if (n % 2 == 0) {
                cout << "YES" << endl;
                for (int i = 1; i <= n; i++) {
                    int num;
                    if (i % 2 == 0) 
                        num = k * i - (2 * k - 2);
                    else 
                        num = k * i - (k - 1);
 
                    for (int j = 1; j <= k; j++) {
                        cout << num << " ";
                        num += 2;
                    }
                    cout << endl;
                }
            } else {
                cout << "NO" << endl;
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