#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s;
    cin>>s;
    ll count1 = 0, total_count = 1;
    char a=s[0];
    for (auto d:s){
        // cout<<count1<<" ";
        if (count1==5 || a!=d){
            total_count++;count1=1;
            // cout<<count1<<"  ";
            a=d;
        }
        else if (a==d && count1<5){
            count1++;
            // cout<<count1<<" ";
        }
        // cout<<count1<<":";
    }
    // cout<<endl;
    cout<<total_count<<endl;
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}