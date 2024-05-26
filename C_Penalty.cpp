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
    string s; cin>>s;
    string s1 = s, s2 = s;
    for (int i=0; i<10; i++){
        if (s[i] == '?') {
            if (i%2){
                s1[i] = '1';
                s2[i] = '0';
            }
            else {
                s1[i] = '0';
                s2[i] = '1';
            }
        }
    }
    ll ans1 = 10, ans2 = 10;
    ll del = 0, remShots = 5;
    for (int i=0; i<10; i++){
        if (s1[i] == '1') {
            if (i%2) del++; else del--;
        }
        if (i%2 == 0) remShots--; 
        if (del > remShots) {
            ans1 = i+1; break;
        }
    }
    del = 0, remShots = 5;
    for (int i=0; i<10; i++){
        if (s2[i] == '1') {
            if (i%2==0) del++; else del--;
        }
        if (i%2) remShots--; 
        if (del > remShots) {
            ans2 = i+1; break;
        }
        // cout<<i<<" "<<del<<" "<<remShots<<" !\n";
    }
    // cout<<s1<<" "<<s2<<"\n";
    // cout<<ans1<<" "<<ans2<<"\n";
    cout<<min(ans1,ans2)<<"\n";
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