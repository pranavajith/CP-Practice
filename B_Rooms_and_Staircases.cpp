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
    ll first1 = -1, last1 = -1;
    for (int i=0;i<n;i++){
        if (s[i]=='1'){
            first1 = i;
            break;
        }
    }
    for (int i=n-1;i>=0;i--){
        if (s[i]=='1'){
            last1 = i;
            break;
        }
    }
    // cout<<first1<<" "<<last1<<"\n";
    if (first1 == -1) cout<<n<<"\n";
    else cout<<max(2*(last1+1), 2*(n-first1))<<"\n";
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