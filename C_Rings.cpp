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
    cin>>n;
    string s;
    cin>>s;
    if (count(s.begin(), s.end(), '0') == 0){
        cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<"\n";
        return;
    }
    for (int i=0; i<n/2; i++){
        if (s[i]=='0'){
            cout<<i+1<<" "<<n<<" "<<i+2<<" "<<n<<"\n";
            return;
        }
    }
    for (int i=n/2; i<n; i++){
        if (s[i]=='0'){
            cout<<1<<" "<<i+1<<" "<<1<<" "<<i<<"\n";
            return;
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