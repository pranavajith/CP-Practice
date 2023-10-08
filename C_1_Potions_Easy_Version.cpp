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
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector <int > a(n);
    for(int i = 0; i <n; i++)
        cin >> a[i];
    long long dp[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
        dp[0][i] = INT_MIN;
    for(int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for(int i = 1; i <= n; i++)
        for(int k = 1; k <= n; k++)
        {
            long long pick = -1e18;
            if(a[i - 1] + dp[i - 1][k - 1] >= 0)
                pick = a[i - 1] + dp[i - 1][k - 1];
            long long notpick = dp[i - 1][k];
            dp[i][k] = max(pick, notpick);
        }
    int ind = -1;
    for(int i = n; i >= 0; i--)
    {
        if(dp[n][i] >= 0)
        {
            ind = i;
            break;
        }
    }
    
    cout<< ind;
   
    
    
}