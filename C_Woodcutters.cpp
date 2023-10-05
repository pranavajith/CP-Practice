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

int sol(vector < vector <ll> > &v, ll count1, ll numfall, ll curcover){
    if (count1==v.size()-1)return numfall+1;
    ll nofell = sol(v, count1+1, numfall, curcover);
    ll fell;
    if (curcover + v[count1-1][1] < v[count1-1][0])fell = sol(v, count1+1, numfall+1, v[count1-1][0]);
    else if (v[count1-1][0]+v[count1-1][1] < v[count1][0])sol(v, count1+1, numfall+1, v[count1-1][0]+v[count1-1][1]);
    else fell = sol(v, count1+1, numfall, curcover);
    cout<<nofell<<" "<<fell<<"\n";
    return max(fell, nofell);
}

void solve(){
    ll n;
    cin>>n;
    vector <vector <ll> > v;
    for (int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        vector <ll> v1;
        v1.push_back(a); 
        v1.push_back(b);
        v.push_back(v1); 
    }
    cout<<sol(v, 1, 1, v[0][0]);

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