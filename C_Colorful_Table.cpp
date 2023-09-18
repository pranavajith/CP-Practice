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
    ll n,k, maxel, minel, minkaind, maxkaind;
    cin>>n>>k;
    // vector <ll> v;
    set <ll> s;
    map <ll, vector <ll> > m;
    for (ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if (i==0){
            vector <ll> temp;
            temp.push_back(i);
            temp.push_back(i);
            m[a]=(temp);
            minel = a;
            minkaind = 0;
            maxkaind = 0;
            maxel = a;
            // v.push_back(a);
            s.insert(a);
        }
        else{
            vector <ll> temp(2);
            if (a > maxel){
                maxel = a;
                maxkaind = i;
                temp[0]=i;
            }
            else{
                temp[0]=min(maxkaind,i);
            }
            if (a<minel){
                minel = a;
                minkaind = i;
                temp[1]=i;
            }
            else{
                temp[1]=max(minkaind,i);
            }
            m[a]=temp;
            // cout<<a<<" "<<temp[0]<<" "<<temp[1]<<"\n";
            for (auto it = s.begin();it!=s.end();it++){
                ll w = *it;
                if (w<maxel){
                    m[w][1]=max(m[w][1],maxkaind);
                }
                // if (w>minel){
                //     m[w][0]=minkaind;
                // }
            }
            // cout<<a<<" "<<temp[0]<<" "<<temp[1]<<"\n";
            s.insert(a);
        }  
    }
    for (int i=1;i<=k;i++){
        if (m[i].size()==0)cout<<0<<" ";
        else{
            cout<<(m[i][1]-m[i][0]+1)*2<<" ";
        }
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