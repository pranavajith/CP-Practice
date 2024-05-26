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
    int n, i, c=0;
        cin >> n;
        int a[n];
        for(i=0; i<n; i++)
            cin >> a[i];
        sort(a+1, a+n);
        for(i=1; i<n; i++)
        {
            if(a[i]>a[0])
            {
                a[0]+=((a[i]-a[0]+1)/2);
            }
        }
        cout << a[0] << endl;
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