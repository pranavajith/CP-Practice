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
    // char a = 'a';
    double minsum = INT_MAX;
    for (int i=0;i<26;i++){
        char a = char(97+i);
        // cout<<a<<" ";
        double count1=0, temp = 0;
        for (int i=0;i<s.size();i++){
            if (s[i]==a || i==s.size()-1){
                // if (count1!=0){
                    // cout<<count1<<": count1 "<<a<<" "<<floor(log(count1)/log(2))+1<<"\n";
                    // cout<<a<<" "<<s[i]<<"\n";
                    if (i==s.size()-1 && s[i]!=a)count1++;
                    if (count1!=0)temp=max(temp,floor(log(count1)/log(2))+1);
                // }
                count1=0;
            }
            else{
                count1++;
            }
        }
        // cout<<a<<" "<<temp<<"\n\n";
        minsum = min(minsum, temp);
    }
    cout<<minsum<<"\n";
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