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
 
    vector<int> y(k);
    vector<int> x(n*k+1, 0);
 
    for (int i = 0; i < k; i++){
        cin >> y[i];
        x[y[i]] = 1;
    }
 
    int m = 1;
    int added = 0;
    for(int i = 0; i < k ; i++){
        cout << y[i];
        added = 0;
        while (added < n-1){
            if (x[m] == 0){
                cout << " " << m;
                added++;
            }
            m++;
        }
        cout << endl;
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