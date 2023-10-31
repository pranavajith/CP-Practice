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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if (n%2){
        cout<<-1<<"\n";
        return;
    }
    if (s[0]=='1' && s[n-1] == '1'){
        cout<<-1<<"\n";
        return;
    }
    vector <ll> v; ll n1 = n;
    ll rightiter = n-1, leftiter = 0;
    while (rightiter != leftiter+1){
        if (s[leftiter] != s[rightiter]){
            leftiter++;
            rightiter--;
            continue;
        }
        if (s[leftiter] == '1'){
            cout<<-1<<"\n";
            return;
        }
        ll siz = s.size();
        v.push_back(rightiter+1);
        // string s2 = s.substr(0, rightiter+1) + "01" + s.substr(rightiter+1, siz - rightiter - 1);
        // s = s2;
        s.insert(rightiter+1, "01");
        rightiter++;
        leftiter++;
    }
    if (s[leftiter] == s[rightiter]){
        cout<<-1<<"\n";
    }
    else {
        cout<<v.size()<<"\n";
        for (int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
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