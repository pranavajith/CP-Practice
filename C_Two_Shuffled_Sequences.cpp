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
    int n;
    cin >> n;
    vector<int> cnt(2e5 + 1);
    vector<int> ans1, ans2;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        cnt[a]++;
        if(cnt[a] > 2){
            cout << "NO";
            return ;
        }
        if(cnt[a] == 1)ans1.emplace_back(a);
        else ans2.emplace_back(a);
    }
    cout << "YES\n";
    sort(ans1.begin(), ans1.end());
    sort(ans2.rbegin(), ans2.rend());
    cout << ans1.size() << "\n";
    for(int a: ans1)cout << a << " ";
    cout << "\n";
    cout << ans2.size() << "\n";
    for(int a: ans2)cout << a << " ";
    return;
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