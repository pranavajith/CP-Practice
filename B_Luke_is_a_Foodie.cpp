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
    int n,x;
        cin>>n>>x;
        vector<int> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
 
        int a = nums[0]-x;
        int b = nums[0]+x;
        if(a<=0) a=0;
        int ans = 0;
        for(int i=0;i<n;i++) {
            int tempa = nums[i]-x;
            int tempb = nums[i]+x;
 
            if(tempb < a || tempa>b) {
                a = tempa;
                b = tempb;
                ans++;
            }
            else {
                a = max(a , tempa);
                b = min(b , tempb);
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