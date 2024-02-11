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

bool check(string &s) {
    int cnt = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '(') cnt++;
        else {
            if (cnt == 0) return false;
            cnt--;
        }
    }
    return (cnt == 0);
}

void solve(){
    string s;
    cin>>s;
    /* 
    A open, BC close
    B open, AC close
    C open, AB close
    AB open, C close
    AC open, B close
    BC open, A close
    */
   string s1, s2, s3, s4, s5, s6;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'A'){
            s1 += '(';
            s4 += '(';
            s5 += '(';
            s2 += ')';
            s3 += ')';
            s6 += ')';
        }
        else if (s[i] == 'B'){
            s1 += ')';
            s2 += '(';
            s3 += ')';
            s4 += '(';
            s5 += ')';
            s6 += '(';
        }
        else{
            s1 += ')';
            s2 += ')';
            s3 += '(';
            s4 += ')';
            s5 += '(';
            s6 += '(';
        }
    }
    if (check(s1) || check(s2) || check(s3) || check(s4) || check(s5) || check(s6)) cout<<"YES\n";
    else cout<<"NO\n";
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