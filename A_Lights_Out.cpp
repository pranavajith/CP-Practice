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
    vector <vector <ll> > v;
    for (int i=0; i<3; i++){
        vector <ll> temp(3);
        for (int j=0; j<3; j++)cin>>temp[j];
        v.push_back(temp);
    }
    vector <vector <ll> > v2(v.begin(), v.end());
    vector <vector <ll> > v3;
    for (int i=0; i<3; i++){
        vector <ll> temp; 
        for (int j=0; j<3; j++) temp.push_back(0);
        v3.push_back(temp);
    }
    // for (auto d:v2){
    //     for (auto e:d)cout<<e<<" "; cout<<"\n";
    // }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (v2[i][j]%2){
                v3[i][j] = 1 - v3[i][j];
                if (i!=0) v3[i-1][j] = 1 - v3[i-1][j];
                if (i!=2) v3[i+1][j] = 1 - v3[i+1][j];
                if (j!=0) v3[i][j-1] = 1 - v3[i][j-1];
                if (j!=2) v3[i][j+1] = 1 - v3[i][j+1];
            }
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++) cout<<1-v3[i][j]; cout<<"\n";
    }
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