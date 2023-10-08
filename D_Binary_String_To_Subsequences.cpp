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
    ll n, count2=1;
    cin>>n;
    string s;
    cin>>s;
    vector <ll> v(n, 1);
    ll k = 1, alt = 1-(s[0]-'0'); s[0]='2'; bool first = true;
    if (count(s.begin(), s.end(), '0') == n || count(s.begin(), s.end(), '1') == n){
        cout<<n<<"\n";
        for (int i=1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    while (count2!=n){
        // cout<<"hey!";
        ll i = 0;
        if (first){
            i=1;
            first = false;
        }
        else{for (; i<n; i++){
            if (s[i]=='1' || s[i]=='0'){
                alt = (s[i]-'0');
                break;
            }
         }
        }
        for (; i<n; i++){
            if ((s[i]-'0')==alt){
                alt = 1-alt;
                v[i]=k;
                s[i]=2;
                count2++;
            }
        }
        k++;
    }
    if(k!=1)cout<<k-1<<"\n";
    else cout<<1<<"\n";
    for (auto d:v)cout<<d<<" ";cout<<"\n";
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