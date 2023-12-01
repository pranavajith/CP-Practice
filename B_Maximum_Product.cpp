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
    ll n, a, count0=0;
    cin>>n;
    ll totprod = 1;
    vector <ll> positive, negative;
    for (int i=0; i<n; i++){
        cin>>a;
        totprod *= a;
        if (a>=0)positive.push_back(a);
        else negative.push_back(a);
        if (a==0)count0++;
    }
    sort(negative.begin(), negative.end());
    sort(positive.rbegin(), positive.rend());
    if (positive.size()==0){
        cout<<negative[negative.size()-1]*negative[negative.size()-2]*negative[negative.size()-3]*negative[negative.size()-4]*negative[negative.size()-5]<<"\n";
    }
    else if (positive.size()==1){
        cout<<positive[0]*negative[0]*negative[1]*negative[2]*negative[3]<<"\n";
    }
    else if (positive.size()==2){
        if (negative.size()>3){
            cout<<negative[0]*negative[1]*negative[2]*negative[3]*positive[0]<<"\n";
        }
        else{
            cout<<positive[0]*positive[1]*negative[0]*negative[1]*negative[2]<<"\n";
        }
    }
    else if (positive.size()==3){
        if (negative.size()<4){
            cout<<positive[0]*positive[1]*positive[2]*negative[0]*negative[1]<<"\n";
        }
        else {
            cout<<max(negative[0]*negative[1]*negative[2]*negative[3]*positive[0], negative[0]*negative[1]*positive[0]*positive[1]*positive[2])<<"\n";
        }
    }
    else if (positive.size()==4){
        if (negative.size()==1){
            cout<<positive[0]*positive[1]*positive[2]*positive[3]*negative[0]<<"\n";
        }
        else if (negative.size()<4){
            cout<<(positive[0]*positive[1]*positive[2]*negative[0]*negative[1])<<"\n";
        }
        else{
            cout<<max(positive[0]*positive[1]*positive[2]*negative[0]*negative[1], positive[0]*negative[0]*negative[1]*negative[2]*negative[3])<<"\n";
        }
    }
    else {
        if (negative.size()<=1){
            cout<<positive[0]*positive[1]*positive[2]*positive[3]*positive[4]<<"\n";
        }
        else if (negative.size()<4){
            cout<<max(positive[0]*positive[1]*positive[2]*positive[3]*positive[4], positive[0]*positive[1]*positive[2]*negative[0]*negative[1])<<"\n";
        }
        else{
            cout<<max(positive[0]*positive[1]*positive[2]*positive[3]*positive[4], max (positive[0]*positive[1]*positive[2]*negative[0]*negative[1], positive[0]*negative[2]*negative[3]*negative[0]*negative[1]) )<<"\n";
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