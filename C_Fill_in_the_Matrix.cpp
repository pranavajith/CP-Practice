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
    ll n,m;
    cin>>n>>m;
    vector <ll> use;
    if (m==1){
        cout<<0<<"\n";
        for (int i=0;i<n;i++){
            cout<<0<<"\n";
        }
        return;
    }
    for (int i=m-1;i>=0;i--){
        use.push_back(i);
    }
    for (int i=m-1;i>=0;i--){
        use.push_back(i);
    }
    vector < vector <ll> > v;
    for (int i=0;i<n;i++){
        
        if (i<m-1){
            vector <ll> temp;
            for (int j=i;j<m+i;j++){
                temp.push_back(use[j]);
            }
            v.push_back(temp);
        }
        else{
            // cout<<v.back().size()<<"! ";
            // cout<<"! "<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<"\n";
            // cout<<"hey!";
            
            v.push_back(v.back());
        }
    }
    if (n>=m){
        cout<<m<<"\n";
    }
    else{
        cout<<n+1<<"\n";
    }
    // cout<<v.size()<<" yay\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
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