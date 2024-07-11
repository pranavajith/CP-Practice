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
      int n,c=0;
    cin >> n;
    int a[n],b[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i<n;i++) {
        cin >> b[i];
    }
    vector<int>cA(5,0),cB(5,0);
    for (int i=0;i<n;i++) {
        for (int j=1;j<=5;j++) {
            if (a[i]==j) {
                cA[j-1]++;
            }
            if (b[i]==j) {
                cB[j-1]++;
            }
        }
    }
    for (int i=0;i<5;i++) {
        if ((cA[i]+cB[i])%2!=0) {
            cout << -1 << endl;
            return;
        }
    }
    for (int i=0;i<5;i++) {
        c+=(((cA[i]+cB[i])/2)-((cA[i]<cB[i])?cA[i]:cB[i]));
    }
    cout << c/2 << endl;
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