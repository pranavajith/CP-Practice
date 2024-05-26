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
     int n;
     cin>>n;
     vector<int>a(n+1);
    map<int,char>p;
     for(int i=1;i<=n;i++){
        cin>>a[i];
        p[a[i]]='A';
     }
     string s;
     cin>>s;
     s=" "+s;
     for(int i=1;i<=n;i++){
         if(p[a[i]]=='A') p[a[i]]=s[i];
         else{
            if(p[a[i]]!=s[i]){
                cout<<"NO"<<endl;
                return;
            }
         }
     }
     cout<<"YES"<<endl;

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