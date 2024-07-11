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
        vector<vector<int> > v(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }
 
        for (int i = 0; i < n; i++) {
                vector<int> vec;
            for (int j = 0; j < m; j++) {
                    vec.push_back(v[i][j]);
 
                if ((i - 1) >= 0) {
                    vec.push_back(v[i - 1][j]);
                }
                if ((j - 1) >= 0) {
                    vec.push_back(v[i][j - 1]);
                }
                if ((i + 1) < n) {
                    vec.push_back(v[i + 1][j]);
                }
                if ((j + 1) < m) {
                    vec.push_back(v[i][j + 1]);
                }
                sort(vec.rbegin(), vec.rend());
 
 
               // cout<<vec[1]<<endl;
                if(vec[0]==v[i][j])
                {
                    v[i][j]=vec[1];
                }
                vec.clear();
            }
        }
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << v[i][j] << " ";
            }
            cout << endl;
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