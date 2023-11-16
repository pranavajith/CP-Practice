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
    deque <ll> q;
    ll n, a; cin>>n;
    for (int i=0; i<n; i++){
        cin>>a; q.push_back(a);
    }
    ll first = 0, second = 0, iter = 0;
    while (q.size()){
        if (iter%2){
            if (q.front() > q.back()){
                second += q.front();
                q.pop_front();
            }
            else{
                second += q.back();
                q.pop_back();
            }
        }
        else{
            if (q.front() > q.back()){
                first += q.front();
                q.pop_front();
            }
            else{
                first += q.back();
                q.pop_back();
            }
        }
        iter++;
    }
    cout<<first<<" "<<second<<"\n";
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