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
    ll n,m,k;
    cin>>n>>m>>k;
    if (k < (n+m-2) || ((((k - (n+m-2)) % 4) != 0) && (((k - (n+m-2)) % 4) != 2))){
        cout<<"NO\n";
        return;
    }
    n--; m--;
    char c;
    cout<<"YES\n";
    for (int i=0; i<m; i++){
        if (i%2) cout<<"B ";
        else cout<<"R ";
    }
    string s;
    if ((m)%2) {
        s = "BR"; 
        c = 'B';
    }
    else {
        c = 'R';
        s = "RB";
    }
    cout<<"\n";
    for (int j=0; j<n; j++){
        for (int i = 0; i < m; i++) {
            if (j<n-2 || i<m-1) cout<<"B ";
            else {
                if (c=='B'){
                    if (n%2) cout<<"R ";
                    else cout<<"B ";
                }   
                else {
                    if (n%2) cout<<"B ";
                    else cout<<"R ";
                }
            }
        }
        cout<<"\n";
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m+1; j++) {
            if ((j==0 || j==1) && i==0) cout<<"R ";
            else if (i==n-1 && j==m-1) cout<<c<<" ";
            else if (j!=m) cout<<"B ";
            else {
                cout<<c<<"\n";
                if (c=='R') c='B';
                else c='R';
            }
        }
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