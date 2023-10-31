#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;


 // FACTORIAL , MODULAR INVERSE (NCR)


ll fact(ll n){
    ll ans = 1;
    for (int i=2; i<=n; i++){
        ans = (ans*i)%mod;
    }
    return ans;
}

ll powmod(ll a, ll b){
    a %= mod;
    if (a == 0) return 0;
    ll product = 1;
    while(b > 0){
        if (b%2){
            product *= a;
            product %= mod;
            --b;
        }
        a *= a;
        a %= mod;
        b >>= 1;
    }
    return product;
}

ll inv(ll a){
    return powmod(a, mod-2);
}

ll nCk(ll n, ll k){
    return ((fact(n) * inv(fact(k)) % mod) * inv(fact(n-k))) % mod;
}


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

// SET INTERSECTION (Example)

// vector <int> d1;
// vector <int> d2;
// vector<int> cd;
// set_intersection(d1.begin(), d1.end(), d2.begin(), d2.end(), inserter(cd, cd.begin()));

