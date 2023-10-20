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


bool check = false;
vector < vector <bool> > vis (501, vector <bool> (501, false));
ll n, m, k, s, count1 = 0;

void dfs (vector <string> &v, ll x, ll y){
    // cout<<x<<" "<<y<<" "<<s<<" "<<count1<<"\n";
    if (check || x<0 || x>=m || y<0 || y>=n || vis[y][x] || v[y][x]=='#') return;
    // cout<<x<<" "<<y<<" "<<count1<<"\n";
    vis[y][x]=true;
    count1++;
    if (count1==s-k){
        check = true;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (v[i][j]=='.' && !vis[i][j])cout<<'X';
                else cout<<v[i][j];
            }
            cout<<"\n";
            
        }
        return;
    }
    dfs(v, x+1, y); 
    dfs(v, x, y+1);
    dfs(v, x-1, y);
    dfs(v, x, y-1);
}

void solve(){
    cin>>n>>m>>k;
    vector < string > v;
    bool check1 = true;
    ll curx = -1, cury = -1;
    for (int i=0; i<n; i++){
        string s1;
        cin>>s1;
        v.push_back(s1);
        s+=count(s1.begin(), s1.end(), '.');
        if (curx == -1){
            if (count(s1.begin(), s1.end(), '.')){
                curx = s1.find('.');
                cury = i;
            }
        }
    }
    // for (auto d:v)cout<<d<<" !";
    if (k==0){
        for (int i=0; i<n; i++)cout<<v[i]<<"\n";
    }
    else{
        if (s==k){
            for (int i=0; i<n; i++){
                for (int j=0; j<m; j++){
                    if (v[i][j] == '.')cout<<'X';
                    else cout<<v[i][j];
                }
                cout<<"\n";
            }
        }
        else dfs(v, curx, cury);
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