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
    vector <ll> v(n), v2(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
        v2[i]=v[i];
        }
    ll a = -1 ,b = -1;
    for (int i=0;i<n-1;i++){
        if (a==-1){
            if (v[i+1]<v[i]){
                a=i;
            }
        }
        else if (b==-1){
            if (v[i+1]>v[i]){
                b=i;
            }
        }
        else{
            break;
        }
    }
    if (a==-1)cout<<"yes\n1 1";
    else{
    if (b==-1)b=n-1;
    vector <ll> temp;
    for (int i=a;i<=b;i++){
        temp.push_back(v[i]);
    }
    reverse(temp.begin(),temp.end());
    for (int i=a;i<=b;i++){
        v[i]=temp[i-a];
    }
    sort(v2.begin(),v2.end());
    if (v2==v){
        cout<<"yes\n"<<a+1<<" "<<b+1<<"\n";
    }
    else{
        cout<<"no\n";
    }
    }
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}