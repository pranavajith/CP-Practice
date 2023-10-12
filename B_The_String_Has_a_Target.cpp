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
    ll n; string s;
    cin>>n>>s;
    // ll it = 1;
    char c = 'z'; ll curint = -1;
    for (int i=0; i<n; i++){
        if (s[i]<=c){
            c=s[i];
            curint = i;
        }
    }
    if (curint == -1){
        cout<<s<<"\n";
    }
    else{
        string s1;
        s1.push_back(c);
        s1.append(s.substr(0,curint));
        s1.append(s.substr(curint+1,n-1-curint));
        cout<<s1<<"\n";
    }
    // while (it<n){
    //     if (s[it] <= s[0]){
    //         char c = s[it];
    //         string s1;
    //         s1.push_back(c);
    //         s1.append(s.substr(0, it));
    //         s1.append(s.substr(it+1, n-1-it));
    //         s=s1;
    //         cout<<s;
    //         // it = 1;
    //     }
    //     it++;
    //     // else break;
    // }
    // cout<<s<<"\n";
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