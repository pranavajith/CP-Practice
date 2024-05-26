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

vector <vector <ll> > vis(8, vector <ll> (8));
vector <vector <ll> > level(8, vector <ll> (8));

bool isVal(ll x, ll y){
    return (x>=0 && y>=0 && x<8 && y<8 && vis[x][y] == 0);
}

ll bfs(string a, string b){
    ll x1 = a[0] - 'a', y1 = a[1] - '1', x2 = b[0] - 'a', y2 = b[1] - '1';
    level[x1][y1] = 0;
    vector <pair<ll,ll> > poss; 
    poss.push_back(make_pair(1, 2));
    poss.push_back(make_pair(-1, 2));
    poss.push_back(make_pair(1, -2));
    poss.push_back(make_pair(-1, -2));
    poss.push_back(make_pair(2, 1));
    poss.push_back(make_pair(-2, 1));
    poss.push_back(make_pair(2, -1));
    poss.push_back(make_pair(-2, -1));
    queue <pair <ll,ll> > q;
    vis[x1][y1] = 1;
    q.push(make_pair(x1,y1));
    while (!q.empty()){
        ll cur_x = q.front().first, cur_y = q.front().second;
        q.pop();
        for (auto d:poss){
            if (isVal(cur_x + d.first, cur_y + d.second)) {
                level[cur_x + d.first][cur_y + d.second] = level[cur_x][cur_y] + 1;
                vis[cur_x + d.first][cur_y + d.second] = 1;
                q.push(make_pair(cur_x + d.first, cur_y + d.second));
            }
        }
        if (level[x2][y2] != 1e9) break;
    }
    return level[x2][y2];

}

void solve(){
    ll n;
    cin>>n;
    while (n--){
        string a,b;
        cin>>a>>b;
        for (int i=0; i<8; i++){
            for (int j=0; j<8; j++) {
                vis[i][j] = 0;
                level[i][j] = 1e9;
            }
        }
        cout<<bfs(a,b)<<"\n";
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