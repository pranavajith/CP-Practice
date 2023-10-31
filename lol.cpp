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

int main() 
{
    // set <ll> s;
    ll iter = 2;
    for (int i=4; i<1e18+1; i++){
        // cout<<i<<" : ";
        ll temp1 = log(i);
        ll temp2 = floor(log2(i));
        //  cout<<temp2<<" : ";
        ll temp3 = floor(log(i)/log(temp2));
        // s.insert(temp3);
        if (temp3 == iter) {
            cout<<i<<" : "<<iter<<"\n";
            iter++;
            // return;
            // break;
        }
        // cout<<temp3<<"\n";
    }
    // for (auto d:s)cout<<d<<" ";cout<<"\n";
    return 0;
}