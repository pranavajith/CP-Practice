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
    ll n, sol=0;
    cin>>n;
    vector <ll> v;
    bool check = false;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a!=3 && !check)check = true;
        if (check){
            v.push_back(a);
        }
    }
    while (v.size()!=0 && v.back()==3)v.pop_back();
    n = v.size();
    if (n==0)cout<<0<<"\n";
    else if (n==1 && v[0]==0)cout<<1<<"\n";
    else{
        // ll sol=0;
        if (v[0]==0)sol++;
        for (int i=1;i<n;i++){
            if (v[i]==0){
                sol++;
                if (i==n-1)break;
                if (v[i+1]==0)sol++;
                if (v[i+1]==3)v[i+1]=0;
                i++;
            }   
            else{
                if (v[i]==v[i-1]){
                    sol++;
                    v[i]=0;
                }
                else{
                    if (v[i]==3 && v[i-1]==0){
                        v[i]=0;
                        continue;
                    }
                    if (v[i]==v[i-1]){
                        sol++;
                        v[i]=0;
                    }
                    else if (v[i]==3){
                        v[i]=3-v[i-1];
                    }
                }
            }
        }
        cout<<sol<<"\n";
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