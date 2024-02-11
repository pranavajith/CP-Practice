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
    // cout<<"ok\n";
    string s;
    cin>>s;
    if (s.size()==1) {
        cout<<s<<"\n";
        return;
    }
    // if (count(s.begin(), s.end(), ))
    // cout<<s<<"\n";
    // cout<<"ok\n";
    ll n;
    // cout<<"ok\n";
    n = s.size();
    // cout<<n<<"\n";
    // cout<<"ok";
    ll leftmax = 1, rightmax = 1;
    // cout<<"ok";
    string left, right;
    // cout<<"ok";
    ll cursiz = 0, l = 0, r = n-1;
    // cout<<"ok";
    while (s[l] == s[r]){
        cursiz++;
        l++;
        r--;
    }
    // cout<<l<<" "<<r<<"\n";
    // cout<<"ok";
    ll maxpalin = 0, l1 = l+1;
    while (l1 <= r) {
        while (l1 <= r && s[l] != s[l1]) l1++;
        // cout<<l1<<"\n";
        if (l1 == r+1)break;
        ll iter = l+1; bool check = true; 
        // ll palinlen = 0;
        for (int i=l1-1; i>l; i--){
            // cout<<i<<" "<<iter<<"\n";
            if (s[i] != s[iter]){
                check = false;
                break;
            }
            iter++;
            
            // palinlen++;
        }
        if (check) {
            maxpalin = max(maxpalin, l1 - l+1);
            // cout<<l1<<" "<<l<<" "<<s[l]<<" "<<s[l1]<<" "<<" !!\n";
        }
        l1++;
    }
    // cout<<"ok";
    leftmax = cursiz + maxpalin;
    // cout<<maxpalin<<" !!\n";
    for (int i=0; i<cursiz; i++) left+=s[i];
    // cout<<left<<"\n";
    for (int i=cursiz; i<cursiz + maxpalin; i++) left+=s[i];
    // cout<<left<<"\n";
    for (int i=cursiz-1; i>=0; i--) left+=s[i];
    // cout<<left<<"\n";
    reverse(s.begin(), s.end());
    cursiz = 0, l = 0, r = n-1;
    while (s[l] == s[r]){
        cursiz++;
        l++;
        r--;
    }
    maxpalin = 0, l1 = l+1;
    while (l1 <= r) {
        while (l1 <= r && s[l] != s[l1]) l1++;
        if (l1 == r+1)break;
        ll iter = l+1; bool check = true; 
        // ll palinlen = 0;
        for (int i=l1-1; i>l; i--){
            if (s[i] != s[iter]){
                check = false;
                break;
            }
            iter++;
            
            // palinlen++;
        }
        if (check) maxpalin = max(maxpalin, l1 - l + 1);
        l1++;
    }
    rightmax = cursiz + maxpalin;
    for (int i=0; i<cursiz; i++) right+=s[i];
    for (int i=cursiz; i<cursiz + maxpalin; i++) right+=s[i];
    for (int i=cursiz-1; i>=0; i--) right+=s[i];
    // cout<<right<<" "<<left<<"\n";
    // cout<<max(leftmax, rightmax)<<"\n";
    if (left == "" && right == "") cout<<s[s.size()-1]<<"\n";
    else if (rightmax > leftmax) cout<<right<<"\n";
    else cout<<left<<"\n";
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