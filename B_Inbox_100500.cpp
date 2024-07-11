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
    long long a[1100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    int cnt=0,b=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
                if(b==2)
                cnt++;
            cnt++;
            b=1;
        }
        if(a[i]==0&&b==1){
            b=2;
        }
    }
    cout<<cnt;
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