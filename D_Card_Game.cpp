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
    char c;
    cin>>n>>c;
    ll trump = 0;
    // 1 = C, 2 = S, 3 = D, 4 = H
    if (c == 'C') trump = 1;
    else if (c == 'S') trump = 2;
    else if (c == 'D') trump = 3;
    else if (c == 'H') trump = 4;
    vector <string> v1, v2, v3, v4;
    for (int i=0; i<2*n; i++){
        string a;
        cin>>a;
        if (a[1] == 'C') v1.push_back(a);
        else if (a[1] == 'S') v2.push_back(a);
        else if (a[1] == 'D') v3.push_back(a);
        else if (a[1] == 'H') v4.push_back(a);
        // cout<<a<<" ";
    }
    // for (auto d:v1) cout<<d<<" "; cout<<"\n";
    // for (auto d:v2) cout<<d<<" "; cout<<"\n";
    // for (auto d:v3) cout<<d<<" "; cout<<"\n";
    // for (auto d:v4) cout<<d<<" "; cout<<"\n"; cout<<"ok!\n";
    vector <string> trumpv, v10, v11, v12;
    if (trump == 1) {
        trumpv = v1;
        v10 = v2, v11 = v3, v12 = v4;
    }
    else if (trump == 2) {
        trumpv = v2;
        v10 = v1, v11 = v3, v12 = v4;
    }
    else if (trump == 3) {
        trumpv = v3;
        v10 = v1, v11 = v2, v12 = v4;
    }
    else {
        trumpv = v4;
        v10 = v1, v11 = v2, v12 = v3;
    }
    sort(trumpv.begin(), trumpv.end());
    sort(v10.begin(), v10.end());
    sort(v11.begin(), v11.end());
    sort(v12.begin(), v12.end());
    // for (auto d:trumpv) cout<<d<<" "; cout<<"\n";
    // for (auto d:v10) cout<<d<<" "; cout<<"\n";
    // for (auto d:v11) cout<<d<<" "; cout<<"\n";
    // for (auto d:v12) cout<<d<<" "; cout<<"\n";
    vector <pair<string,string> > ans;
    while (v10.size() > 1){
        string a1 = v10.back(); v10.pop_back();
        string a2 = v10.back(); v10.pop_back();
        ans.push_back(make_pair(a2, a1));
    }
    while (v11.size() > 1){
        string a1 = v11.back(); v11.pop_back();
        string a2 = v11.back(); v11.pop_back();
        ans.push_back(make_pair(a2, a1));
    }
    while (v12.size() > 1){
        string a1 = v12.back(); v12.pop_back();
        string a2 = v12.back(); v12.pop_back();
        ans.push_back(make_pair(a2, a1));
    }

// for (auto d:ans){
//             cout<<d.first<<" "<<d.second<<"\n";
//         }

    while (!trumpv.empty() && !(v10.empty() && v11.empty() && v12.empty())){
        if (v10.size()){
            string a1 = trumpv.back(); trumpv.pop_back();
            string a2 = v10.back(); v10.pop_back();
            ans.push_back(make_pair(a2, a1));
        }
        else if (v11.size()){
            string a1 = trumpv.back(); trumpv.pop_back();
            string a2 = v11.back(); v11.pop_back();
            ans.push_back(make_pair(a2, a1));
        }
        else if (v12.size()){
            string a1 = trumpv.back(); trumpv.pop_back();
            string a2 = v12.back(); v12.pop_back();
            ans.push_back(make_pair(a2, a1));
        }
        else {
            cout<<"IMPOSSIBLE\n";
            return;
        }
    }
    while (trumpv.size() > 1){
        string a1 = trumpv.back(); trumpv.pop_back();
        string a2 = trumpv.back(); trumpv.pop_back();
        ans.push_back(make_pair(a2, a1));
    }
    if (trumpv.empty() && v10.empty() && v11.empty() && v12.empty()){
    // if (true){
        for (auto d:ans){
            cout<<d.first<<" "<<d.second<<"\n";
        }
    }
    else cout<<"IMPOSSIBLE\n";
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