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
    string str;
        cin >> str;
        int k = str.length();
        ll sum = 0;
        bool z = false;
        ll even = 0;
        for(int i = 0; i < k; i++) {
            sum += (str[i] - '0');
            if(str[i] == '0') z = true;
            if((str[i] - '0') % 2 == 0) even++;
        }
        if(sum % 3 == 0 && z && even >= 2) {
            cout << "red" << endl;
        }else {
            cout << "cyan" << endl;
        }

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