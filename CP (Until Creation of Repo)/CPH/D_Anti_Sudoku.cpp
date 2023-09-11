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
    vector <string> v;
    for (int i=0;i<9;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int l[9] = {0,3,6,1,4,7,2,5,8};
    for (int i=0;i<9;i++){
        if (v[i][l[i]]=='1')v[i][l[i]]='2';
        else v[i][l[i]]='1';
    }
    for (int i=0;i<9;i++){
        cout<<v[i]<<"\n";
    }
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}