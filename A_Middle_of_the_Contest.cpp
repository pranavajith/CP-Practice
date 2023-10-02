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
    string s1, s2;
    cin>>s1>>s2;
    ll h1 = stoi(s1.substr(0,2)), h2 = stoi(s2.substr(0,2)), m1 = stoi(s1.substr(3,2)), m2 = stoi(s2.substr(3,2));
    ll diffh = h2-h1, diffm;
    if (m1>m2){
        diffm=m2-m1+60;
        diffh--;
    }
    else diffm = m2-m1;
    ll difftime = diffh*60 + diffm;
    ll incr = difftime/2;
    ll finalm = m1+incr;
    // cout<<finalm<<"!!\n";
    h1+=(finalm/60);
    finalm%=60;
    string sol;
    if (h1<10)sol+='0'+to_string(h1);
    else sol+=to_string(h1);
    sol+=':';
    if (finalm<10)sol+='0'+to_string(finalm);
    else sol+=to_string(finalm);
    cout<<sol<<"\n";
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