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
    vector <ll> v;
    string s;
    cin>>s;
    if (count(s.begin(), s.end(), '0') != n/2 || n%2){
        cout<<-1<<"\n";
        return;
    }
    for (int i=0; i<n/2; i++){
        if (v.size()>300){
            cout<<-1<<"\n";
            return;
        }
        if (s[i] == s[n-1-i]){
            if (s[i] == '1'){
                s.insert(i, "01");
                n+=2;
                v.push_back(i);
            }
            else{
                s.insert(n-i, "01");
                v.push_back(n-i);
                n+=2;
            }
        }
    }
    cout<<v.size()<<"\n"; for (int i=0; i<v.size(); i++)cout<<v[i]<<" ";cout<<"\n";
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