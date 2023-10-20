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
    ll n, sum1 = 0;
    cin >> n;
    ll ans = n;
    multiset <ll> s;
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        s.insert(a);
        sum1+=a;
        while (sum1<0){
            auto it = s.begin();
            sum1-=*it;
            s.erase(it);
            ans--;
        }
    }
    cout<<ans<<"\n";
}