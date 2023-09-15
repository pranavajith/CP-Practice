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
    ll n, count1 = 0, count2 = 0, sol=0;
    cin>>n;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==-1)count1++;
        else count2++;
    }
    if (count1>count2){
        sol+=(count1 - count2 + 1)/2;
        // cout<<"sol! "<<sol<<"\n";
        count1-=sol;
        count2+=sol;
        }
    if (count1%2==1)sol++;
    cout<<sol<<"\n";
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