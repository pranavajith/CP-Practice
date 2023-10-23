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
    map <ll, vector <ll> > m;
    for (int i=0; i<s.size(); i++){
        m[s[i]].push_back(i);
    }
    for (auto d:m){
        cout<<char(d.first)<<" : ";
        for (auto it : d.second){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    ll curpos = m[t[0]][0];
    // cout<<"curpos = "<<curpos<<"\n";
    for (int i=1; i<t.size(); i++){
        cout<<t[i]<<"\n";
        cout<<"curpos = "<<curpos<<"\n";
        if (m[t[i]].size()==0){
            cout<<-1<<"\n";
            return;
        }
        // curpos++;
        // cout<<"curpos after change to be checked = "<<curpos<<"\n";
        ll newpos = lower_bound(m[t[i]].begin(), m[t[i]].end(), curpos) - m[t[i]].begin();
        // cout<<"newpos = "<<newpos<<"\n";
        if (newpos == m[t[i]].size()){
        // if (newpos == 0){
            ans++;
            curpos = m[t[i]][0]+1;
        }
        else{
            curpos = m[t[i]][newpos] + 1;
        }
        cout<<"anscur = "<<ans<<"\n\n";
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