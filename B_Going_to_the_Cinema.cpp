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
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int cnt=0;
        for(int k=0 ; k<=n ; k++){
            if(k==0 || a[k-1]<k){
                if(k==n || a[k]>k){
                    cnt++;
                }
                
            }
        }
        cout<<cnt<<endl;
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