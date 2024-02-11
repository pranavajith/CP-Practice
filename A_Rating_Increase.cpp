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
    string s;
    cin>>s;
    if (s[0] == '0') cout<<-1<<"\n";
    else {
        bool check = true; ll iter = -1;
        for (int i=0; i<s.size(); i++) {
            if (s[i] != '0'){
                if (check) check = false;
                else {
                    iter = i;
                    break;
                }
            } 
        }
        if (check || iter == -1) cout<<-1<<"\n";
        else {
            string s1 = s.substr(0, iter);
            string s2 = s.substr(iter, s.size()-iter);
            ll int1 = stoi(s1), int2 = stoi(s2);
            if (int2 > int1) cout<<int1 <<" "<<int2<<"\n";
            else cout<<-1<<"\n";

        }
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