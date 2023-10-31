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
    string s;
    cin>>s;
    queue <ll> e, o;
    for (int i=0; i<s.size(); i++){
        if ((s[i]-'0')%2==1) o.push(s[i]-'0');
        else e.push(s[i]-'0');
    }
    // cout<<e.size()<<" "<<e.front()<<" "<<o.size()<<" "<<o.front()<<"\n";
    while (e.size() && o.size()){
            if (e.front() > o.front()){
                // cout<<"ok!";
                cout<<o.front(); o.pop();
            }
            else {
                // cout<<"ok!2";
                cout<<e.front(); e.pop();
            }
        
    }
    while (o.size()){
        cout<<o.front(); o.pop();
    }
    while (e.size()){
        cout<<e.front(); e.pop();
    }
    cout<<"\n";
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