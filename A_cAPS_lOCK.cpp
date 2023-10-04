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
    // cout<<s;
    bool check = true;
    for (int i=1;i<s.size();i++){
        if (s[i] != toupper(s[i])){
            check = false;
            break;
        }
    }
    if (check){
        // cout<<char(toupper(s[0]));
        if (isupper(s[0]))cout<<char(tolower(s[0]));
        else cout<<char(toupper(s[0]));
        for (int i=1;i<s.size();i++){
            // s[i]=tolower(s[i]);
            cout<<char(tolower(s[i]));
        }
        cout<<"\n";
    }
    else cout<<s<<"\n";
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