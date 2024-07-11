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
     long long n, m;
    cin >> n >> m;
    long long slope = (n/(abs(n)))*(m/(abs(m)));
    long long p = m + slope*n;
    if(n>0 && m>0 || n>0 && m<0){
        cout<< "0 " << p << " " << slope*p << " 0" << endl;
    }
    else{
        cout<< slope*p << " 0 0 " << p << endl;
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