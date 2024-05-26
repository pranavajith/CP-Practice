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
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    string ans = "";
    for(int i = 0; i < n; i++){
        if(s[i] != 'o')
            ans += s[i];
        else{
            i++;
            bool flag = false;
            while(i < n-1 && s[i] == 'g' && s[i+1] == 'o'){
                flag = true;
            
                i += 2;
            }
            i--;
            if(flag)
                ans += "***";
            else
                ans+= s[i];
        }
    }
    cout << ans << endl;
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