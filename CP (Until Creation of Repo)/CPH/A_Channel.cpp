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
    ll n,a,q, count_inc=0, count_dec=0;
    cin>>n>>a>>q;
    ll a1=a,a2=a;
    // a1 assumes every + is new and every - is old, a2 assumes every + is old (if possible) and every - is new
    string s;
    cin>>s;
    bool flag=true;
    for (auto d:s){
        if (d=='+')count_inc++;
        else count_dec++;
    }
    ll countplus=0, countminus=0;
    bool flagplus = true, flagminus = true;
    for (auto d:s){
        if (a1==n || a2==n){
            cout<<"YES\n";
            return;
        }

        if (flagplus && d=='+'){
            a1++;
            a2++;
            flagminus = false;
        }
        else if (flagminus && d=='-'){
            a1--;
            a2--;
            flagplus = false;
        }
        else if (d=='+'){
            countplus++;
            a1++;
            if (countminus)countminus--;
            else a2++;
        }
        else if (d=='-'){
            countminus++;
            a2--;
            if (countplus)countplus--;
            else a1--;
        }
        // if (d=='+'){
        //     count1++;
        //     a1++;
        //     a2++;
        //     if (flag){

        //     }
        // }
        // if (d=='-'){
        //     a1--;
        //     flag = false;
        // }
    }
    // cout<<a1<<" "<<a2<<"\n";
    if (a1==n)cout<<"YES\n";
    else if (a+count_inc<n)cout<<"NO\n";
    else cout<<"MAYBE\n";



    // if (a+count_inc-count_dec >= n || a==n)cout<<"YES\n";
    // else if (a+count_inc < n)cout<<"NO\n";
    // else cout<<"MAYBE\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}