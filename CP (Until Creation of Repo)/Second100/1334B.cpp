#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,x, ind_x, sum_big=0, count1=0;
    cin>>n>>x;
    // if (n==100000 && x==1000000000)cout<<0<<"\n";
    // else{
    vector <ll> v;
    set <ll> s;
    for (ll i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        s.insert(a);
    }
    if (s.size()==1){
        if (*s.begin()<x){
            cout<<0<<"\n";
        }
        else{
            cout<<n<<"\n";
        }
    }
    else{
    sort(v.begin(),v.end());
    
    bool ind_x_check=true;
    for (ll i=0;i<n;i++){
        if (v[i]>=x && ind_x_check){
            ind_x = i;
            ind_x_check = false;
        }
        if (v[i]>=x){
            sum_big+=v[i];
            count1++;
        }
    }
    for (ll i=ind_x-1;i>=0;i--){
        if ((sum_big+v[i])/(count1+1) >= x){
            count1++;
            sum_big+=v[i];
        }
        else{
            break;
        }
    }
    cout<<count1<<"\n";
}
}
// }

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