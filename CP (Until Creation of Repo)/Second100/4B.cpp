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
    ll d,sumTime, summax=0, summin=0;
    cin>>d>>sumTime;
    vector <ll> v_min;
    vector <ll> v_max;
    for (int i=0;i<d;i++){
        ll ma,mi;
        cin>>mi>>ma;
        summax+=ma;
        summin+=mi;
        v_max.push_back(ma);
        v_min.push_back(mi);
    }
    if (sumTime > summax || sumTime < summin){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        ll diff = sumTime - summin;
        for (int i=0;i<d;i++){
            if (diff>0){
                ll diff2 = v_max[i]-v_min[i];
                if (diff2>diff){
                    cout<<v_min[i]+diff<<" ";
                    diff=0;
                }
                else{
                    cout<<v_max[i]<<" ";
                    diff-=diff2;
                }
            }
            else{
                cout<<v_min[i]<<" ";
            }
            // cout<<"\n";
        }
        cout<<"\n";
    }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}