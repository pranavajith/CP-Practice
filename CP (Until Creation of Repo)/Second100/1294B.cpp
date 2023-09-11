#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector < vector <ll> > v;
    vector<ll> lol;
    lol.push_back(0);
    lol.push_back(0);
    v.push_back(lol);
    for (int i=0;i<n;i++){
        vector <ll> temp(2);
        cin>>temp[0]>>temp[1];
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    bool flag1=true;
    for (int i=0;i<v.size()-1;i++){
        if (v[i][1]>v[i+1][1]){
            // cout<<v[i][1]<<" "<<v[i+1][1]<<"\n";
            flag1=false;
            break;
        }
    }
    if (flag1==false){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        for (int i=0;i<v.size()-1;i++){
            // cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i+1][0]<<" "<<v[i+1][1]<<"\n";
            if (v[i][0]!=v[i+1][0]){
                cout<<string(v[i+1][0]-v[i][0],'R');
            }
            if (v[i][1]!=v[i+1][1]){
                cout<<string(v[i+1][1]-v[i][1],'U');
            }
        }
        cout<<"\n";
    }
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}