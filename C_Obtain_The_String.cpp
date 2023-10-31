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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s,t;
    ll ans = 1;
    cin>>s>>t;
    if (s.size()==1 && t.size()==1){
        if (s==t){
            cout<<1<<"\n";
        }
        else cout<<-1<<"\n";
        return;
    }
    if (t.size()==1){
        if (count(s.begin(), s.end(), t[0])){
            cout<<1<<"\n";
        }
        else cout<<-1<<"\n";
        return;
    }
    if (s.size()==1){
        if (count(t.begin(), t.end(), s[0]) == t.size()){
            cout<<t.size()<<"\n";
        }
        else cout<<-1<<"\n";
        return;
    }
    map <ll, vector <ll> > m;
    for (int i=0; i<s.size(); i++){
        m[s[i]].push_back(i);
    }
    // for (auto d:m){
    //     cout<<char(d.first)<<" : ";
    //     for (auto it : d.second){
    //         cout<<it<<" ";
    //     }
    //     cout<<"\n";
    // }
    ll curpos = 0;
    // cout<<"curpos = "<<curpos<<"\n";
    for (int i=0; i<t.size(); i++){
        // cout<<t[i]<<"\n";
        // cout<<"curpos = "<<curpos<<"\n";
        if (m[t[i]].empty()) {
            cout << -1 << "\n";
            return;
        }
        // curpos++;
        // cout<<"curpos after change to be checked = "<<curpos<<"\n";
        auto it = lower_bound(m[t[i]].begin(), m[t[i]].end(), curpos);
    
        if (it == m[t[i]].end()) {
            ans++;  // If we can't find a position in the current character's positions, increment ans
            curpos = m[t[i]][0] + 1;  // Set curpos to the first position of the current character
        } else {
            curpos = *it + 1;  // Set curpos to the next position of the current character
        }
        // cout<<"anscur = "<<ans<<"\n\n";
    }
    cout<<ans<<"\n";
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