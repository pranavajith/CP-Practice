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
    ll a,b;
    cin>>a>>b;
    string s, s1;
    bool check = false;
    cin>>s;
    for (int i=0;i<a;i++){
        if (s[i]-'0' < b && check == false){
            s1.push_back(b+'0');
            check = true;
        }
        s1.push_back(s[i]);
        if (i==a-1 && check == false)s1.push_back(b+'0');
    }
    cout<<s1<<"\n";
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