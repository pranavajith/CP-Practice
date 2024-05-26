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
    string a,b;
    cin>>a>>b;
    if (a[0] == '0'){
        reverse(a.begin(), a.end());
        while (!a.empty() && a.back() == '0') a.pop_back();
        if (a.empty()) a = "0";
        reverse(a.begin(), a.end());
    }
    if (b[0] == '0'){
        reverse(b.begin(), b.end());
        while (!b.empty() && b.back() == '0') b.pop_back();
        if (b.empty()) b = "0";
        reverse(b.begin(), b.end());
    }
    // cout<<a<<" "<<b<<"\n";
    if (a.size() > b.size()) cout<<">\n";
    else if (a.size() < b.size()) cout<<"<\n";
    else {
        if (a==b) cout<<"=\n";
        else {
            for (int i=0; i<a.size(); i++){
                if (a[i] == b[i]) continue;
                if (a[i] > b[i]){
                    cout<<">\n";
                }
                else cout<<"<\n";
                return;
            }
        }
    }
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