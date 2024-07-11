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
int j=0,i=0,ans=0;
if(a[0]==b[0]){
    cout<<"YES"<<endl;
    cout<<a[0]<<"*"<<endl;
}
else if(a[a.size()-1]==b[b.size()-1]){
     cout<<"YES"<<endl;
    cout<<"*"<<a[a.size()-1]<<endl;
 
}
else{
for( i=0;i<a.size()-1;++i){
    for( j=0;j<b.size()-1;++j){
        if(a[i]==b[j]&&a[i+1]==b[j+1]){
            ans=1;
        
            break;
        }
    }
    if(ans==1){
        break;
    }
}
if(ans==1){
    cout<<"YES"<<endl;
    cout<<"*"<<a[i]<<a[i+1]<<"*"<<endl;
}
else{
    cout<<"NO"<<endl;
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