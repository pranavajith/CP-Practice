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
    string s;
    cin>>n>>s;
    vector <ll> v;
    for (int i=0;i<n;i++){
        if (s[i]=='2' || s[i]=='3' || s[i]=='5' || s[i]=='7'){
            v.push_back(s[i]-'0');
        }
        else if (s[i]=='4'){
            v.push_back(2);
            v.push_back(2);
            v.push_back(3);
        }
        else if (s[i]=='9'){
            v.push_back(3);
            v.push_back(3);
            v.push_back(2);
            v.push_back(7);
        }
        else if (s[i]=='8'){
            v.push_back(2);
            v.push_back(2);
            v.push_back(2);
            v.push_back(7);
        }
        else if (s[i]=='6'){
            v.push_back(5);
            v.push_back(3);
        }
        else if (s[i]=='6'){
            v.push_back(5);
            v.push_back(3);
        }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    
    }
    for (int i=0;i<v.size();i++){
        cout<<v[i];
    }
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