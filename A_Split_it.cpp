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


int subarrayWithSum(vector<int> &arr, int k) {
    // Write your code here.
    int left = 0, right = 0, count1 = 0, maxlen = 0, n = arr.size();

    // Before and After arrays
    vector <int> before(n, 0), after(n, 0);
    int temp = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] == 0) temp++;
        else {
            before[i] = temp; temp = 0;
        }
    }
    temp = 0;
    for (int i=n-1; i>=0; i--) {
        if (arr[i] == 0) temp++;
        else {
            after[i] = temp; temp = 0;
        }
    }

    // 2 pointers
    for (auto d:before) cout<<d<<" "; cout<<"\n";
    for (auto d:after) cout<<d<<" "; cout<<"\n";
    int ans = 0;
    while (left < n && arr[left] != 1) left++;
    while (right < n && count1 + arr[right] < k) {
        count1 += arr[right];
        right++;
    }
    // ans = max(ans, ((before[left]+1) * (after[right]+1)));
    // cout<<right<<" "<<after[right]+1<<"\n"; 
    // if (right == n) {
    //     if (count1 == k) return ans+1;
    //     return 0;
    // }
    while (right < n) {
        ans += ((before[left]+1) * (after[right]+1));
        left++; right++;
        while (arr[left] != 1) left++;
        while (right < n && arr[right] != 1) right++;
        // if (right == n) break;
        // cout<<ans<<"! ";
    }
    return ans;
}


int main() 
{
    
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<subarrayWithSum(v, k)<<"\n";
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // // TxtIO;
    // ll t; cin>>t; while(t--)
    //     solve();
    return 0;
}