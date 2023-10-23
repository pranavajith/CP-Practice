#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,m,k, x,y;
    string s;
    cin>>n>>m>>k;
    // if (n==1 && m==1){
    //     cout<<0<<"\n";
    //     return;
    // }
    // if (n==1){
    //     for (int i=0; i<m; i++){
    //         s+='L';
    //     }
    //     for (int i=0; i<m; i++){
    //         s+='R';
    //     }
    //     cout<<s.size()<<"\n"<<s<<"\n";
    //     return;
    // }
    // if (m==1){
    //     for (int i=0; i<n; i++){
    //         s+='D';
    //     }
    //     for (int i=0; i<n; i++){
    //         s+='U';
    //     }
    //     cout<<s.size()<<"\n"<<s<<"\n";
    //     return;
    // }
    for (int i=0; i<2*k; i++) {
        cin>>x>>y;
    }
    for (int i=0; i<m-1; i++) s+='L';
    for (int i=0; i<n-1; i++) s+='D';
    for (int i=0; i<n; i++){
        if (i%2==0) for (int j=0; j<m-1; j++)s+='R';
        else for (int j=0; j<m-1; j++)s+='L';
        s+='U';
    }
    s.pop_back();
    cout<<s.size()<<"\n"<<s<<"\n";
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