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
    ll bigmulti = INT_MAX, num3 = -1, ind = -1;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        // cin>>v[i];
        ll a;
        cin>>a;
        v.push_back(a);
        ll count3 = 0;
        while (a%3==0){
            count3++;
            a/=3;
        }
        if (count3==0)continue;
        if (count3>num3 || (count3==num3 && v[i]<=bigmulti)){
            bigmulti = v[i];
            num3 = count3;
            ind = i;
        }
    }
    sort(v.begin(), v.end());
    if (ind==-1){
        for (auto d:v)cout<<d<<" ";
    }
    else{
        ll count1=1;
        cout<<bigmulti<<" ";
        // v[ind]=-1;
        while (count1!=n){
            count1++;
            if (count(v.begin(), v.end(), bigmulti*2)){
                cout<<bigmulti*2<<" "; bigmulti *=2;
            }
            else {
                cout<<bigmulti / 3<<" "; bigmulti /=3;
            }
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}