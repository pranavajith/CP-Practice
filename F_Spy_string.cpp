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
    ll n,m;
    cin>>n>>m;
    // vector <string> v(n);
    set <string> s;
    string lol;
    for (int i=0; i<n; i++){
        cin>>lol;
        s.insert(lol);
    }
    vector <string> v(s.begin(), s.end());
    n = s.size();
    vector <bool> check(n, false);
    if (n==1){
        cout<<v[0]<<"\n";
        return;
    }
    if (m==1) {
        cout<<"a"<<"\n";
        return;
    }
    if (n==2) {
        bool check1 = false, check2 = false;
        string ans = v[0];
        for (int i=0; i<m; i++) {
            if (ans[i] != v[1][i]){
                if (!check1){
                    check1 = true;
                    ans[i] = v[1][i];
                }
                else if (!check2){
                    check2 = true;
                }
                else {
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        cout<<ans<<"\n";
        return;
    }
    string ans = v[0];
    for (int i=0; i<m; i++) {
        char holder = ans[i];
        for (char c = 'a'; c<='z'; c++) {
            ans[i] = c;
            bool check = true;
            for (int j=0; j<n; j++) {
                ll counter = 0;
                for (int k=0; k<m; k++) {
                    if (v[j][k] != ans[k]) counter++;
                }
                if (counter > 1) {
                    check = false;
                    break;
                }
            }
            if (check) {
                cout<<ans<<"\n";
                return;
            }
        }
        ans[i] = holder;
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