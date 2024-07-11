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
    ll n,x;
    cin >> n;
	    
	    ll cnt1 = 0, inversions = 0, first0_position = -1, last1_position;
	    
	    for (int i = 0; i < n; i++) {
	        cin >> x;
	        
	        if (x == 0) {
	            inversions += cnt1;
	            
	            if (first0_position == -1) {
	                first0_position = i;
	            }
	        } else {
	            cnt1++;
	            
	            last1_position = i;
	        }
	    }
	    
	    ll cnt0 = n - cnt1;
	    
	    ll mx = inversions;
	    
	    if (cnt0 > 0) { /// first 0 -> 1
	        mx = max(mx, inversions + cnt0 - 1 - first0_position);
	    }
	    
	    if (cnt1 > 0) { /// last 1 -> 0
	        int cnt_zeroes_after_last1 = n - 1 - last1_position;
	        
	        mx = max(mx, inversions + cnt1 - 1 - cnt_zeroes_after_last1);
	    }
 
	    cout << mx << "\n";
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