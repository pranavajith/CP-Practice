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
    ll n,a;
    cin>>n;
    deque <ll> q;
    for (int i=0; i<n; i++) {
        cin>>a;
        q.push_back(a);
    }
    ll teamsiz, k;
    cin>>teamsiz>>k;
    priority_queue <ll> p1, p2;
    for (int i=0; i<k; i++){
        if (q.size()==0)break;
        // cout<<q.front()<<" !\n";
        p1.push(q.front());
        q.pop_front();
    }
    for (int i=0; i<k; i++){
        if (q.size()==0)break;
        p2.push(q.back());
        q.pop_back();
    }
    // for (int i=0; i<p1.size(); i++) cout<<p1[i];
    // cout<<p1.size()<<" "<<p2.size()<<"\n";
    ll ans = 0;
    while (teamsiz--){
        // cout<<"lol";
        if (p1.size() && p2.size()) {
            if (p1.top() >= p2.top()){
                ans+=p1.top();
                p1.pop();
                if (q.size()) {
                    p1.push(q.front()); q.pop_front();
                }
            }
            else {
                ans+=p2.top();
                p2.pop();
                if (q.size()) {
                    p2.push(q.back()); q.pop_back();
                }
            }
            
        }
        else if (p1.size()) {
                ans+=p1.top();
                p1.pop();
                if (q.size()) {
                    p1.push(q.front()); q.pop_front();
                }
        }
        else {
                ans+=p2.top();
                p2.pop();
                if (q.size()) {
                    p2.push(q.back()); q.pop_back();
                }
        }
    }
    cout<<ans<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}