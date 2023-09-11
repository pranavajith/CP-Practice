#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, countT1=0, countM1=0, countT2=0, countM2=0;
    cin>>n;
    string s;
    cin>>s;
    bool flag1 = true, flag2=true;
    for (auto d:s){
        if (d=='T'){
            // cout<<d<<"\n";
            countT1++;
        }
        else{
            if (countM1+1 > countT1){
                flag1 = false;
                break;
            }
            else{
                countM1++;
            }
        }
    }
    reverse(s.begin(),s.end());
    for (auto d:s){
        if (d=='T'){
            // cout<<d<<"\n";
            countT2++;
        }
        else{
            if (countM2+1 > countT2){
                flag2 = false;
                break;
            }
            else{
                countM2++;
            }
        }
    }
    // cout<<countT<<" "<<countM<<"\n";
    if (flag1 && flag2 && countT1 == countM1*2)cout<<"YES\n";
    else cout<<"NO\n";
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}