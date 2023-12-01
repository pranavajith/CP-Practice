#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll a1,p1,a2,p2; cin>>a1>>p1>>a2>>p2;
    if (floor(log10(a1)+1) + p1 > floor(log10(a2)+1) + p2){
        cout<<">\n";
        return;
    }
    else if (floor(log10(a1)+1) + p1 < floor(log10(a2)+1) + p2){
        cout<<"<\n";
        return;
    }
    if (p1>p2) {
        for (int i=0; i<p1-p2; i++) a1*=10;
    }
    else{
        for (int i=0; i<p2-p1; i++) a2*=10;
    }
    // while (p1--) a1*=10;
    // while (p2--) a2*=10;
    if (a1>a2)cout<<">\n";
    else if (a1<a2)cout<<"<\n";
    else cout<<"=\n";
    // ll b1,b2;
    // if (a1==0 && p1==0)b1=0;
    // else {
    //     string s1; s1+=to_string(a1); for (int i=0; i<p1; i++)s1+='0';
    //     b1 = stoll(s1);
    // }
    // if (a2==0 && p2==0)b2=0;
    // else {
    //     string s2; s2+=to_string(a2); for (int i=0; i<p2; i++)s2+='0';
    //     b2 = stoll(s2);
    // }
    // if (b1==b2) cout<<"=\n";
    // else if (b1>b2)cout<<">\n";
    // else cout<<"<\n";
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