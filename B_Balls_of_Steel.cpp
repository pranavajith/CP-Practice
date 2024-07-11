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
    int n,k;
        cin>>n>>k;
        vector<pair<int,int> > balls(n);
        for(int i = 0; i<n; i++)
            cin>>balls[i].first>>balls[i].second;
        int ans = -1;
        for(auto ball1 : balls){
            int count = 0;
            for(auto ball2 : balls){
                if(abs(ball1.first - ball2.first) + abs(ball1.second - ball2.second) > k)
                    break;
                count++;
            }
            if(count == n){
                ans = 1;
                break;
            }
        }
        cout<<ans<<endl;
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