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

bool isPalindrome(string s){
    string s1=s;
    reverse(s1.begin(),s1.end());
    return s1==s;
}

void solve(){
   int n;
        string s;
        cin >> n >> s;
        int l = 0;
        int cnt = 0;
        while (l + 1 < n) {
            if (s[l] == '(' || (s[l] == ')' && s[l + 1] == ')')) {
                l += 2;
            } else {
                int r = l + 1;
                while (r < n && s[r] != ')') {
                    ++r;
                }
                if (r == n) {
                    break;
                }
                l = r + 1;
            }
            ++cnt;
        }
        cout << cnt << ' ' << n - l << '\n'; 
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}