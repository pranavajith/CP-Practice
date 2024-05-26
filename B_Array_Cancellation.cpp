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
    int n; cin >> n;
        int arr[n + 1];
        
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        long long pos_val = 0;
        long long remaining_neg_val  = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] >=0) 
                pos_val += arr[i];  
            else{
                if(pos_val >= abs(arr[i]))
                    pos_val -= abs(arr[i]);
                else{
                    remaining_neg_val += abs(arr[i]) - pos_val;
                    pos_val = 0;
                }
            }
        }
        cout << remaining_neg_val<< endl;
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