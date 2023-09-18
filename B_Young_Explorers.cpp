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
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll i =0, sol = 0;
    while (i!=n){
        if (v[i]==1){
            sol++;
            i++;
        }
        else{
            ll curlim = v[i], cursize = 1;
            i++;
            while (i!=n){
                curlim = max(curlim, v[i]);
                cursize++;
                if (cursize>=curlim){
                    sol++;
                    i++;
                    break;
                }
                i++;
            }
        }
    }
    cout<<sol<<"\n";
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