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
    ll n,m;
    cin>>n>>m;
    
    
        vector <string> v;
        for (int i=0;i<n;i++){
            string a;
            cin>>a;
            v.push_back(a);
        }
    if (m<4)cout<<"NO\n";
    else{
    vector < vector <char> > bigv;
    for (int i=0;i<m;i++){
        vector <char> temp;
        for (int j=0;j<n;j++){
            temp.push_back(v[j][i]);
        }
        bigv.push_back(temp);
    }
    vector <bool> flag (4,false);
    char ar[] = {'v','i','k','a'};
    ll i = 0;
    for (auto d:bigv){
        if (i==4)break;
        if (count(d.begin(),d.end(),ar[i])){
            flag[i]=true;
            i++;
            // cout<<"hey!";
        }
    }
    if (flag[0]==true && flag[1]==true && flag[2]==true && flag[3]==true){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    }
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}