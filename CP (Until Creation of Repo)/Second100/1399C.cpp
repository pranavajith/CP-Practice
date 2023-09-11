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
    map <int,int> m;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }
    int max_sol = 0;
    for (int i=2;i<=(2*n);i++){
        int total = 0;
        for (auto d:m){
            int w = i-d.first;
            if (w>=1 && m.count(w)){
                total += min(m[w],d.second);
            }
        }
        total/=2;
        max_sol=max(max_sol,total);
    }
    cout<<max_sol<<"\n";
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