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

int main(){
    ll n, ans = 0;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    stack <ll> s;
    for (int i=0; i<n; i++) {
        if (s.empty() || s.top() == v[i]) s.push(v[i]);
        else {
            s.pop();
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
