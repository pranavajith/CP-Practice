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
    ll temp = s[s.size()-1];
    ll indeven = -1;
    for (int i=0;i<s.size();i++){
        if ((s[i]-'0')%2==0){
            if (s[i] < temp){
                s[s.size()-1] = s[i];
                s[i]=temp;
                cout<<s<<"\n";
                return;
            }
            else{
                indeven = i;
            }
        }
    }
    if (indeven==-1)cout<<-1<<"\n";
    else {
        s[s.size()-1]=s[indeven];
        s[indeven]=temp;
        cout<<s<<"\n";
    }
}   

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}