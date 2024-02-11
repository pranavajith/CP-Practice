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

string lol(string s, ll k, int i){
    ll iter = 0, temp = 1, n=s.size();
    while (k){
        
    }
}

void solve(){
    set <string> check1;
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map <ll,ll> m;
    ll curmax = 0;
    // cout<<s<<"!\n";
    for (int i=0; i<n; i++) {
        // cout<<s[i]-'a'<<"\n";
        // cout<<i<<"\n";
        m[s[i]-'0']++;
        curmax = max(curmax, m[s[i] - '0']);
    }
    if (curmax >= k){
        cout<<0<<"\n";
        cout<<s<<"\n";
        return;
    }
    // for (auto d:m){
    //     cout<<d.first<<" "<<d.second<<"\n";
    // }
    // cout<<"\n";
    vector <ll> potans;
    ll mincost = LLONG_MAX;
    for (int i=0; i<10; i++) {
        ll curcost = 0, req = k - m[i];
        ll temp = 1;
        string umm = s;
        // cout<<req<<" !! ";
        // cout<<"\n"<<i<<" : ";
        while (req > 0){
            // cout<<temp<<" ";
            if (i+temp < 10){
                if (req > m[i+temp]){
                    for (int j=0; j<n; j++){
                        if (umm[j]==i+temp+'0') umm[j] = i+'0';
                    }
                    curcost +=m[i+temp]*temp;
                    req -= m[i+temp];
                }
                else {
                    ll a = 0;
                    curcost += req*temp;
                    while (req){
                        if (umm[a] == i+temp+'0') {
                            umm[a] = i+'0';
                            req--;
                        }
                        a++;
                        
                    }
                }
            }

            if (i-temp >= 0){
                if (req > m[i-temp]){
                    for (int j=0; j<n; j++){
                        if (umm[j]==i-temp+'0') umm[j] = i+'0';
                    }
                    curcost += m[i-temp]*temp;
                    req -= m[i-temp];
                }
                else {
                    ll a = n-1;
                    curcost += req*temp;
                    while (req){
                        if (umm[a] == i-temp+'0') {
                            umm[a] = i+'0';
                            req--;
                        }
                        a--;
                        // req--;
                    }
                }
            }

            temp++;
        }
        // cout<<umm;
        if (curcost == mincost){
            check1.insert(umm);
        }
        else if (curcost < mincost) {
            check1.clear();
            check1.insert(umm);
            mincost = curcost;
        }
    }
    // for (auto d:check1) cout<<d<<" ";
    cout<<mincost<<"\n";
    cout<<*check1.begin()<<"\n";
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