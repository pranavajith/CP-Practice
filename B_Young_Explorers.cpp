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


void f(vector<vector<int> > &ans, vector<int> temp, vector <int> &v, int target, int ind){
    if (target == 0) {
        sort (temp.begin(), temp.end());
        ans.push_back(temp);
        return;
    }
    if (ind == v.size()) return;
    if (v[ind] <= target){
        temp.push_back(v[ind]);
        f(ans, temp, v, target - v[ind], ind+1);
        temp.pop_back();
    }
    f(ans, temp, v, target, ind+1);
}

vector<vector<int> > combSum(vector<int> &ARR, int B)
{
    vector<vector<int> > ans; vector<int> temp;
    int n = ARR.size();
    f(ans, temp, ARR, B, 0);
    return ans;
}

void solve(){
    vector <int> v; 
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    vector<vector<int> > lol = combSum(v, 8);
    for (auto d:lol) {
        for (auto e:d) cout<<e<<" "; cout<<"\n";
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