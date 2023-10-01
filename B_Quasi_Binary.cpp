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
    string s;
    cin>>s;
    vector <string> v;
    while (stoll(s)){
        string s1;
        for (int i=0;i<s.size();i++){
            if (s[i]!='0')s1.push_back('1');
            else s1.push_back('0');
        }
        s = to_string(stoll(s) - stoll(s1));
        v.push_back(s1);
        // s="0";
        // cout<<s;
    }
    cout<<v.size()<<"\n";
    for (auto d:v)cout<<d<<" ";
    cout<<"\n";
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