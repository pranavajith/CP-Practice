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

int longestSuccessiveElements(vector<ll>&a) {
    // Write your code here.
    sort(a.begin(), a.end());
    // for (auto d:a) cout<<d<<" "; cout<<"\n\n";
    int n = a.size();
    int maxlen = 1, right = 1, curlen = 1;
    while (right<n) {
        while (right < n && ((a[right] == a[right-1]) || a[right] == (a[right-1] + 1))) {
            if (a[right] == a[right-1]+1) curlen++;
            right++;
            // cout<<curlen<<" ";
        }
        maxlen = max(maxlen, curlen);
        curlen = 1, right++;
    }
    return maxlen;
}

int main() 
{
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    // sort(v.begin(), v.end());
    // for (auto d:v) cout<<d<<" ";
    cout<<longestSuccessiveElements(v);
    return 0;
}