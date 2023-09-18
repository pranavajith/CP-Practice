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

bool check(ll n){
    string s = to_string(n);
    ll sum1 = 0;
    for (int i=0;i<s.size();i++){
        // if (sum1>=10)break;
        sum1+=s[i]-'0';
        // cout<<s[i];
    }
    if (sum1==10)return true;
    else return false;
}

void solve(){
    ll n, i = 19, k=1;
    cin>>n;
    while (true){
        if (check(i)){
            
            if (k==n){
                cout<<i<<"\n";
                break;
            }
            else k++;
            // cout<<"!"<<k;
        }
        i++;
    }
    // if (check(226))cout<<"YAY!";
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