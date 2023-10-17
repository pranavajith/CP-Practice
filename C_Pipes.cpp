#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    string s1, s2;
    cin>>s1>>s2;
    // if (n==1){
    //     if (s1[0]>'2' && s2[0]>'2')cout<<"YES\n";
    //     else cout<<"NO\n";
    //     return;
    // }
    vector <string> v;
    v.push_back(s1);
    v.push_back(s2);
    string curstring = s1, prevcurstring;
    // bool finalshift = true;
    ll alt = 0, prevalt;
    for (int i=0; i<n; i++){
        if (i==n-1){
            prevalt = alt;
        }
        if (v[alt][i] > '2'){
            alt = 1-alt;
            if (v[alt][i] <= '2'){
                cout<<"NO\n";
                return;
            }
        }
    }
    if (alt == 1 && ((prevalt == 1 && v[1][n-1]<='2') || (prevalt == 0 && v[1][n-1]>'2'))){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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