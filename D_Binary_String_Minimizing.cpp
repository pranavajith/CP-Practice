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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll l = 0, r = 0, numof1 = 0;
    while (r<n && s[r]=='0'){
        r++;
        l++;
    }
    while (r<n && s[r]=='1'){
        r++;
        numof1++;
    }
    while (r<n){
        if (numof1 > k){
            s[r] = '1';
            s[r-k] = '0';
            break;
        }
        s[r] = '1';
        s[l] = '0';
        l++;
        k -= numof1;
        // cout<<numof1<<" !\n";
        numof1--;
        while (r<n && s[r]=='1'){
            r++;
            numof1++;
        }
        // cout<<numof1<<" !\n";
        // cout<<s<<" "<<k<<"\n";
    }
    cout<<s<<"\n";
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