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

void solve(){
    string s = "";
    ll ind = -1;
    bool check = true;
    for (int i=0;i<8;i++){
        string s1;
        cin>>s1;
        if (check){
            for (int j=0;j<8;j++){
                if (s1[j]!='.'){
                    check = false;
                    ind = j;
                    s+=s1[j];
                    break;
                }
            }
        }
        else{
            if (s1[ind]!='.')s+=s1[ind];
        }
    }
    cout<<s<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}