#include <bits/stdc++.h> 
int f(int ind, vector <int> v, vector <int> &dp) {
    if (ind == 0) return v[0];
    if (ind < 0) return 0;
    if (dp[ind] != -1) return dp[ind];
    return dp[ind] = max(v[ind] + f(ind-2, v, dp), f(ind, v, dp));
}
long long int houseRobber(vector<int>& valueInHouse)
{
    int n = valueInHouse.size();
    vector <int> dp1(n+1, -1), dp2(n+1, -1);
    vector <int> v1, v2;
    for (int i=0; i<n; i++) {
        if (i!=0) v1.push_back(valueInHouse[i]);
        if (i!=n-1) v2.push_back(valueInHouse[i]);
    }
    int a = f(n-2, v1, dp1), b = f(n-2, v2, dp2);
    return max(a,b);
}