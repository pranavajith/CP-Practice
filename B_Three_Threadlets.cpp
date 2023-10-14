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
    vector <ll> v(3);
    for (int i=0;i<3;i++)cin>>v[i];
    sort(v.begin(),v.end());
    if (v[0]==v[1] && v[1]==v[2]){
        cout<<"YES\n";
        return;
    }
    if (v[1]%v[0]){
        cout<<"NO\n";
        return;
    }
    // else if (v[0]==v[1] && ((v[2]%v[0]==0 && v[2]==v[0]/2) || (v[2]%v[0]==0 && (v[2]%v[0])   v[2]==v[0]/2)))
    else if (v[0]==v[1] && (v[2]==v[0]*2 || v[2]==v[0]*4))cout<<"YES\n";
    else if (v[1] == v[0]*2 && (v[2]==v[0]*2 || v[2]==v[0]*3))cout<<"YES\n";
    else if (v[1]==v[0]*2 && v[2]==v[0]*3)cout<<"YES\n";
    else if (v[1]==v[0] && v[2]==v[0]*3)cout<<"YES\n";
    else if (v[1]==v[0]*2 && v[2]==v[1])cout<<"YES\n";
    // else if (v[1]==v[0] && )
    else cout<<"NO\n";
    // ll count1=0;
    // while (count1<3){
    //     int i = 0;
    //     for (i=0; i<v.size(); i++){
    //         if (count1==3)break;
    //         if (v[i]!=)
    //     }
    //     // cout<<count1+1<<" : \n";
    //     // for (auto d:v)
    //     //     cout<<d<<" ";
    //     // cout<<"\n";
    //     // if (count(v.begin(), v.end(), v[0]) == v.size()){
    //     //     cout<<"YES\n";
    //     //     return;
    //     // }
    //     // if (v[1]!=v[0]){
    //     //     v.push_back(v[1]-v[0]);
    //     //     v[1]=v[0];
    //     //     sort(v.begin(), v.end());
    //     // }
    //     // else {
    //     //     v.push_back(v[2]-v[0]);
    //     //     v[2]=v[0];
    //     //     sort(v.begin(), v.end());
    //     // }
    //     count1++;
    // }
    // cout<<"NO\n";
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