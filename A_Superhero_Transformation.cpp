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
    string s1, s2;
    cin >> s1 >> s2;
    string ans = "Yes";
    int ct = 0;
    if(s1.length() != s2.length()) ans = "No";
    else{
        for (int i = 0; i < s1.length(); ++i)
        {
            if(s1[i] == 'a' or s1[i] == 'e' or s1[i] == 'i' or s1[i] == 'o' or s1[i] == 'u'){
                if (s2[i] == 'a' or s2[i] == 'e' or s2[i] == 'i' or s2[i] == 'o' or s2[i] == 'u'){
                    ct++;
                }
                else{
                    ans = "No";
                    break;
                }
            }
            else{
                if (s2[i] == 'a' or s2[i] == 'e' or s2[i] == 'i' or s2[i] == 'o' or s2[i] == 'u'){
                    ans = "No";
                    break;
 
                }
                else ct++;
 
            }
 
        }
    }
 
    if(ct == s1.length()) cout << "Yes" << endl;
    else cout << ans << endl;
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