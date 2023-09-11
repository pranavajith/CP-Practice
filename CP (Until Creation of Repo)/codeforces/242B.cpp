#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    vector <ll> x,y;
    // vector <ll> y;
    ll n;
    cin>>n;
    vector < vector <ll> > big_v;
    for (int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        x.push_back(a);
        y.push_back(b);
        vector <ll> temp;
        temp.push_back(a);
        temp.push_back(b);
        big_v.push_back(temp);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    ll x1 = x[0];
    ll y1 = y[y.size()-1];
    vector <ll> temp2;
    temp2.push_back(x1);
    temp2.push_back(y1);
    if (count(big_v.begin(),big_v.end(),temp2)){
        ll it = ((find(big_v.begin(),big_v.end(),temp2)))-big_v.begin()+1;
        cout<<it<<endl;
    }
    else cout<<-1<<endl;
}

int main() 
{

        solve();
    
    return 0;
}