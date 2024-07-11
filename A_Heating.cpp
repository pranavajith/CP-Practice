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

int solve(int c, int sumi)
{
    int minCost = INT_MAX;
    for (int numRadiators = 1; numRadiators <= c; ++numRadiators)
    {
        int b = sumi / numRadiators;
        int r = sumi % numRadiators;
        int cost = 0;
        for (int i = 0; i < r; ++i)
        {
            cost += (b + 1) * (b + 1);
        }
        for (int i = r; i < numRadiators; ++i)
        {
            cost += b * b;
        }
        minCost = min(minCost, cost);
    }
    return minCost;
}


void solve(){
    int n;
    cin >> n;
    vector<int> results;
    for (int i = 0; i < n; ++i)
    {
        int c, sumi;
        cin >> c >> sumi;
        int minCost = solve(c, sumi);
        results.push_back(minCost);
    }
    for (int result : results)
    {
        cout << result << endl;
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