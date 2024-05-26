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
        int x=0;
        int temp=n-1;
        while(temp>1){
            temp/=2;
            x++;
        }
        int a=1<<x;
        for(int i=1;i<a;i++){
            cout<<i<<" ";
        }
        cout<<"0"<<" "<<a<<" ";
        for(int i=a+1;i<=n-1;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
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