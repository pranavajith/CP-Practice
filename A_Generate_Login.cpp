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
    ll l1,l2;
    string f,l,login;
    cin>>f>>l;
    l1 = f.length();
    l2 = l.length();
    login += f[0];
    for(ll j=0; j<l2; j++){
        for(ll i=1; i<l1; i++){
            if(f[i]-'a' < l[j]-'a'){
                login += f[i];
            }
            else{
                break;
            }
        }
        if(login.length() > 0){
            for(ll k=0; k<=j; k++){
                login += l[k];
            }
            break;
        }
    }
    cout<<login<<endl;
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