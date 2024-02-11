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
    string s;
    cin>>s;
    string lar, rem;
    map <ll, bool> m;
    vector <ll> v;
    for (int i=n-1; i>=0; i--){
        if (lar.size()==0) {
            lar.push_back(s[i]);
            v.push_back(i);
            m[i] = true;
        }
        else if (s[i] >= lar.back()) {
            lar.push_back(s[i]);
            v.push_back(i);
            m[i] = true;
        }
        else rem.push_back(s[i]);
    }
    reverse(rem.begin(), rem.end());
    reverse(lar.begin(), lar.end());
    reverse(v.begin(), v.end());
    if (!is_sorted(rem.begin(), rem.end())) {
        cout<<-1<<"\n";
        return;
    }
    string temp = s;
    sort(temp.begin(), temp.end());
    ll iter1 = lar.size()-1;
    for (int i=0; i<v.size(); i++) {
        if (temp[v[i]] != lar[iter1--]){
            cout<<-1<<"\n";
            return;
        }
    }


    // if (!is_sorted(rem.begin(), rem.end()) || !is_sorted(lar.begin(), lar.end())) {
    //     cout<<-1<<"\n";
    //     return;
    // }
    // cout<<lar<<"\n";
    // reverse(lar.begin(), lar.end());
    // string disisdeone; ll lariter = 0;
    // for (int i=0; i<n; i++) {
    //     if (m[i]) {
    //         disisdeone.push_back(lar[lariter++]);
    //     }
    //     else disisdeone.push_back(s[i]);
    // }
    // // cout<<disisdeone<<" ";
    // if (!is_sorted(disisdeone.begin(), disisdeone.end())){
    //     cout<<-1<<"\n";
    //     return;
    // }
    // set <char> se;
    // for (char d:lar) se.insert(d);
    // cout<<se.size() - 1<<"\n";
    ll iterlol = 0;
    while (iterlol < lar.size() && lar[iterlol] == lar[0]) iterlol++;
    iterlol--;
    cout<<lar.size()-1-iterlol<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "abcdef";
    // if (is_sorted(s.begin(), s.end()))  cout<<"yay";
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}