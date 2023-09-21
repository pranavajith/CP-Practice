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
    ll n, ans=0;
    cin>>n;
    // vector <string> v;
    while (n--){
        ans=0;
    for (int i=0;i<10;i++){
        string s;
        cin>>s;
        
        // v.push_back(s);
        for (int j=0;j<10;j++){
            if (s[j]=='X'){
            if (i==0 || j==0 || i==9 || j==9){
                ans+=1;
            }
            else if (i==1 || j==1 || i==8 || j==8){
                ans+=2;
            }
            else if (i==2 || j==2 || i==7 || j==7){
                ans+=3;
            }
            else if (i==3 || j==3 || i==6 || j==6){
                ans+=4;
            }
            else{
                ans+=5;
            }
        }
        }
    }
        cout<<ans<<"\n";
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