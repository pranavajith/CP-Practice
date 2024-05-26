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
    int n , l=0;
    cin >> n ;
    map<int,bool> mp ;
    vector<int> v(n) ,  ans ;
    for(int i = 0 ; i<n ; i++){
        cin >> v[i] ;
    }
    for(int i = n-1 ; i>=0 ; i--){
        if(mp[v[i]]==1){
            continue;
        }
        mp[v[i]] = 1 ;
        ans.push_back(v[i]);
        l++;
    }
    cout << l << endl ;
    for(int i = l-1 ; i>=0 ; i--){
        cout << ans[i] <<  " ";
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