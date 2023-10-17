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
    string s1,s2;
    cin>>s1>>s2;
    if (s2.size() < s1.size()){
        cout<<"NO\n";
        return;
    }
    sort(s1.begin(), s1.end());
    for (int i=0; i<s2.size()-s1.size()+1; i++){
        string s3 = s2.substr(i, s1.size());
        sort(s3.begin(), s3.end());
        if (s1==s3){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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