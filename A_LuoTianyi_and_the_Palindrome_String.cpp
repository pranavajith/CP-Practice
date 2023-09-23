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

bool isPalin(string s){
    for (int i=0;i<(s.size()+1)/2;i++){
        if (s[i]!=s[s.size()-i-1])return false;
    }
    return true;
}

void solve(){
    string s;
    cin>>s;
    if (!isPalin(s.substr(1, s.size()-1)) && s.size()!=1)cout<<s.size()-1<<"\n";
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