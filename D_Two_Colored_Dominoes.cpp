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
    ll n,m;
    cin>>n>>m;
    vector <string> v;
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for (int i=0;i<n-1;i++){
        ll countUD = count(v[i].begin(), v[i].end(), 'U');
        if (countUD%2){
            cout<<-1<<"\n";
            return;
        }
        ll counter = 0;
        for (int j=0;j<m;j++){
            if (counter<countUD/2 && v[i][j]=='U'){
                v[i][j]='B';
                v[i+1][j]='W';
                counter++;
            }
            else if (v[i][j]=='U'){
                v[i][j]='W';
                v[i+1][j]='B';
            }
        }
    }
    for (int i=0;i<m-1;i++){
        // ll countLR = count(v[i].begin(), v[i].end(), 'L')+count(v[i].begin(), v[i].end(), 'W')+count(v[i].begin(), v[i].end(), 'B');
        ll countLR = 0;
        for (auto d:v){
            if (d[i]=='L')countLR++;
        }
        if (countLR%2){
            cout<<-1<<"\n";
            return;
        }
        ll counter = 0;
        for (int j=0;j<n;j++){
            if (counter<countLR/2 && v[j][i]=='L'){
                v[j][i]='B';
                v[j][i+1]='W';
                counter++;
            }
            else if (v[j][i]=='L'){
                v[j][i]='W';
                v[j][i+1]='B';
            }
        }
    }
    for (auto d:v){
        cout<<d<<"\n";
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