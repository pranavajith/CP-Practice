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
    int n;  cin>>n;
    int a[n];     for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++){
        if(i%2==0 && a[i]>a[i+1] && (i+1)<n){
            swap(a[i+1],a[i]);
        }
        else if(i%2!=0 && a[i]<a[i+1] && (i+1)<n){
              swap(a[i+1],a[i]);
        }
        
    }
    for(int i=0;i<n;i++)   cout<<a[i]<<" ";
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