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
    string s1=s, s2=s;
    bool bigcheck1 = false, bigcheck2 = false;

    bool check1 = false, check2=false;
    for (int i=0;i<s1.size()-1;i++){
        if (s1[i]=='A' && s1[i+1]=='B'){
            check1 = true;
            s1[i]='Z'; s1[i+1]='Z';
            break;
        }
    }
    for (int i=0;i<s1.size()-1;i++){
        if (s1[i]=='B' && s1[i+1]=='A'){
            check2 = true;
            break;
        }
    }
    if (check1 && check2)bigcheck1=true;
    // else cout<<"NO\n";

    check1 = false, check2=false;
    for (int i=0;i<s2.size()-1;i++){
        if (s2[i]=='B' && s2[i+1]=='A'){
            check1 = true;
            s2[i]='Z'; s2[i+1]='Z';
            break;
        }
    }
    for (int i=0;i<s2.size()-1;i++){
        if (s2[i]=='A' && s2[i+1]=='B'){
            check2 = true;
            break;
        }
    }
    if (check1 && check2)bigcheck2=true;

    if (bigcheck1 || bigcheck2)cout<<"YES\n";
    else cout<<"NO\n";

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