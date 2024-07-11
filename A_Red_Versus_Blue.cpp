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
    int n,a,b;
    cin>>n>>a>>b;
    b++;
    int q=a/b,r=a%b;
    b--;
    for(int i=0;i<b;i++){
        for(int i=0;i<q;i++) cout<<'R';
        if(r>0) cout<<'R';
        r--;
        cout<<'B';
    }
    for(int i=0;i<q;i++) cout<<'R';
    cout<<endl;
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