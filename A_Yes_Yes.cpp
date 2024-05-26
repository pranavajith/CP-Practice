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
    char prev;
    for (int i=0; i<s.size(); i++){
        if (i==0){
            if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's') {
                cout<<"NO\n";
                return;
            }
            prev = s[i];
        }
        else {
            if (prev == 'Y') {
                if (s[i] != 'e') {
                    cout<<"NO\n";
                    return;
                }
                prev = 'e';
            }
            else if (prev == 'e') {
                if (s[i] != 's') {
                    cout<<"NO\n";
                    return;
                }
                prev = 's';
            }
            else if (prev == 's') {
                if (s[i] != 'Y') {
                    cout<<"NO\n";
                    return;
                }
                prev = 'Y';
            }
            else {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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