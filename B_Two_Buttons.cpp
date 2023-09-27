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


int main() {
    ll n, m, sol=0;
    cin >> n >> m;

    while (true){
    while (m>n && m%2==0){
        sol++;
        m/=2;
    }
    if (m<=n){
        sol+=n-m;
        cout<<sol<<"\n";
        return 0;
    }
    else {
        m++;
        sol++;
    }
    // cout<<sol+n-m;
    }
    return 0;
}