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
    string s;
    cin>>s;
    ll iter = 0, sol = 0, finalconv = -1;
    for (int i=0;i<s.size();i++){
        if (s[i]=='B'){
            sol+=iter;
            finalconv = iter;
            if(iter!=0)s[i]='C';
            iter = 0;
        }
        else if (i==s.size()-1 && s[i]=='A' && s[i-1]=='B')sol++;
        else if (i==s.size()-1 && s[i]=='A' && s[i-1]=='A'){
            if (finalconv < iter+1){
                sol += iter+1 - finalconv;
            }
        }
        else{
            iter++;
        }
    }
    cout<<sol<<"\n";
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