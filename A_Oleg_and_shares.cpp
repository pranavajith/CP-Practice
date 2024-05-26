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
        int n,k; cin >> n >> k;
    int a[n];
    for(int i = 0; i< n;i++){
        cin >> a[i];
    }
    long long int ans = 0;
    sort(a,a+n);
    bool ch = true;
    for(int i = 1; i< n;i++){
        if((a[i] - a[0]) % k == 0){
            ans += ((a[i]-a[0]) / k);
        }
        else {
            cout << "-1";  
            ch = false;
            break;
        }
    }
    if(ch){
        cout << ans;
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