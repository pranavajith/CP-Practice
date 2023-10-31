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


// FACTORISATION AND GETTING DIVISORS

vector<pair<int, int> > factors; // Note : Clear factors in code to find factors of different numbers.
void getFactors(int n) {
    factors.clear();
    int d = 1;
    for (int i = 2; i * i <= n; i += d, d = 2)
        if (n % i == 0) {
            factors.push_back(make_pair(i, 0));
            while (n % i == 0) {
                n /= i;
                factors.back().second++;
            }
        }
    if (n != 1)
        factors.push_back(make_pair(n, 1));
}

vector<int> divisors;
void getDivisors(int ind = 0, int res = 1) {
    if (ind == (int) factors.size()) {
        divisors.push_back(res);
        return;
    }
    for (int i = 0; i <= factors[ind].second; i++) {
        getDivisors(ind + 1, res);
        res *= factors[ind].first;
    }
}

void solve(){
    ll n,m, k;
    cin>>n>>m>>k;
    factors.clear(); divisors.clear();
    getFactors(n);
    getDivisors();
    vector <int> d1 = divisors;
    factors.clear(); divisors.clear();
    getFactors(m);
    getDivisors();
    vector <int> d2 = divisors;
    factors.clear(); divisors.clear();
    vector <ll> inter;
    sort(d1.begin(), d1.end());
    sort(d2.begin(), d2.end());
    set_intersection(d1.begin(), d1.end(), d2.begin(), d2.end(), inserter(inter, inter.begin()));
    while (k--){
        ll l,r;
        cin>>l>>r;
        ll loc = upper_bound(inter.begin(), inter.end(), r) - inter.begin();
        loc--;
        if (loc==-1 || inter[loc] < l){
            cout<<-1<<"\n";
        }
        else cout<<inter[loc]<<"\n";
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