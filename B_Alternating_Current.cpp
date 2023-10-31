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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    stack <char> q;
    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++){
        // cout<<s[i];
        if (i==0){
            q.push(s[0]);
        }
        else{
            if (q.empty() || q.top() != s[i]){
                q.push(s[i]);
            }
            else{
                q.pop();
            }
        }
    }
    if (q.size()==0){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
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