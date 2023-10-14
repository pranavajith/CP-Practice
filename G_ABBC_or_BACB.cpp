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
    string s;
    cin>>s;
    for (int i=0; i<s.size()-1; i++){
            if (s[i]=='B' && s[i+1]=='B'){
                cout<<count(s.begin(), s.end(), 'A')<<"\n";
                return;
            }
        }
    if (s.size()==1)cout<<0<<"\n";
    else if (!(s[0]=='A' && s[s.size()-1]=='A'))cout<<count(s.begin(), s.end(), 'A')<<"\n";
    else if (count(s.begin(), s.end(), 'B') == 0)cout<<0<<"\n";
    else{
        ll minA = INT_MAX, curans = 0;
        for (int i=0; i<s.size(); i++){
            if (s[i]=='A')curans++;
            else{
                minA = min(minA, curans);
                curans = 0;
            }
        }
        minA = min(minA, curans);
        cout<<count(s.begin(), s.end(), 'A')-minA<<"\n";
    }
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