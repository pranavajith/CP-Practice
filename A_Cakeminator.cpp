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
    int r,c; cin>>r>>c;
    vector<string> cake(r);
    for(int i=0;i<r;i++){
        cin>>cake[i];
    }
    vector<bool> row(r, false);
    vector<bool> col(c, false);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(cake[i][j]=='S'){
                row[i] = true;
                col[j] = true;
            }}}
    int countr=0;
    for (int i=0;i<r;i++){
        if(!row[i]){
            countr++;
        }}
    int countc=0;
    for (int j=0;j<c;j++){
        if(!col[j]){
            countc++;
        }}
    cout<<countr*c + countc*(r-countr);
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