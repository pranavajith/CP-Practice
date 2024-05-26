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
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    int cntYes = 0;
    for (auto d:primes){
        cout<<d<<"\n";
        cout.flush();
        string a; cin>>a;
        if (a=="yes") {
            cntYes++;
        }
        if (d<11){
            cout<<d*d<<"\n";
            cout.flush();
            string b; cin>>b;
            if (b == "yes") cntYes++;
        }
        if (cntYes > 1){
            cout<<"composite\n"; return;
        }
    }
    cout<<"prime\n";
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