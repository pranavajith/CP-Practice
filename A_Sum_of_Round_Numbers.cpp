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
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s;
    cin>>s;
    vector <string> v;
    for (int i=0; i<s.size(); i++){
        if (s[i]!='0'){
            string temp;
            temp+=s[i];
            for (int j=i; j<s.size()-1; j++) temp+='0';
            v.push_back(temp);
        }
    }
    cout<<v.size()<<"\n";
    for (int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<"\n";
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