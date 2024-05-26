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
    ll n;
    cin>>n;
    ll asiz; cin>>asiz;
    deque <ll> a;
    for (int i=0; i<asiz; i++) {
        ll a1; cin>>a1;
        a.push_back(a1);
    }
    ll bsiz; cin>>bsiz;
    deque <ll> b;
    for (int i=0; i<bsiz; i++) {
        ll a1; cin>>a1;
        b.push_back(a1);
    }
    ll cnt = 1;
    if (asiz == 0) cout<<0<<" "<<2<<"\n";
    else if (bsiz == 0) cout<<0<<" "<<1<<"\n";
    else {
        while (cnt < 1e4){
            if (a.front() > b.front()){
                a.push_back(b.front());
                a.push_back(a.front());
                a.pop_front(); b.pop_front();
            }
            else {
                b.push_back(a.front());
                b.push_back(b.front());
                a.pop_front(); b.pop_front();
            }
            if (a.size() == 0) {
                cout<<cnt<<" "<<2<<"\n";
                return;
            }
            if (b.size() == 0) {
                cout<<cnt<<" "<<1<<"\n";
                return;
            }
            
            cnt++;
        }
        cout<<-1<<"\n";
    }
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