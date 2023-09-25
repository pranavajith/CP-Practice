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
    ll polys, polye;
    cin>>polys>>polye;
    bool check1 = false, check2=false;
    for (int i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        if (a>=polys){
            check1 = true;
            if (b>=polye)check2=true;
        }
        
    }
    if (!check1 || !check2)cout<<polys<<"\n";
    else cout<<-1<<"\n";
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