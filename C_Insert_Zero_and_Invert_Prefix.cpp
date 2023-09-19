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
    ll n, count1=0;
    cin>>n;
    bool check =false;
    vector <ll> v;
    // vector <ll> temp;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==0){
            // temp.push_back(0);
            count1++;
            v.push_back(count1);
            // temp.clear();
            count1=0;
            check = false;
        }
        else{
            // temp.push_back(a);
            count1++;
            check = true;
        }

    }
    if (check){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    reverse(v.begin(),v.end());
    // for (auto d:v)cout<<d<<" ";cout<<"\n";
    for (int i=0;i<v.size();i++){
        for (int j=0;j<v[i]-1;j++){
            // cout<<"!"<<v[i]-1<<" ";
            cout<<0<<" ";
        }
        cout<<v[i]-1<<" ";
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