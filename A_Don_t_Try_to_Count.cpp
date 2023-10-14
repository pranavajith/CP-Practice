#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,m;
    cin>>n>>m;
    string s1, s2;
    cin>>s1>>s2;
    ll count1 = 0;
    while (count1<10){
        if (s1.size()<s2.size())s1 = s1+s1;
        else{
            if (s1.find(s2) != string::npos){
                cout<<count1<<"\n";
                return;
            }
            s1 = s1 + s1;
        }
        count1++;
        // cout<<count1<<"\n";
    }
    cout<<-1<<"\n";
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