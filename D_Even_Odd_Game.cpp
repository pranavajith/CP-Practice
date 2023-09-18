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
    ll n, scorealice=0, scorebob=0;
    cin>>n;
    vector <ll> even;
    vector <ll> odd;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a%2)odd.push_back(a);
        else even.push_back(a);
    }
    // for (int i=0;i<even.size();i++)cout<<even[i]<<" ";cout<<"\n";
    // for (int i=0;i<odd.size();i++)cout<<odd[i]<<" ";cout<<"\n";
    if (even.size()>odd.size()){
        scorebob = accumulate(odd.begin(),odd.end(),0);
        // cout<<scorebob<<"\n";
        sort(even.begin(),even.end());
        reverse(even.begin(),even.end());
        scorealice = accumulate(even.begin(),even.begin()+odd.size(),0);
        // cout<<scorealice<<"\n";
        // vector <ll> alice;
        for (int i=0;i<even.size();i+=2){
            scorealice+=even[i];
        }
        if (scorealice>scorebob)cout<<"Alice\n";
        else if (scorealice<scorebob)cout<<"Bob\n";
        else cout<<"Tie\n";
    }
    else{
        scorealice = accumulate(even.begin(),even.end(),0);
        // cout<<scorealice<<"\n";
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        scorebob = accumulate(odd.begin(),odd.begin()+even.size(),0);
        // cout<<scorebob<<"\n";
        // vector <ll> alice;
        for (int i=1;i<odd.size();i+=2){
            scorebob+=odd[i];
        }
        if (scorealice>scorebob)cout<<"Alice\n";
        else if (scorealice<scorebob)cout<<"Bob\n";
        else cout<<"Tie\n";
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