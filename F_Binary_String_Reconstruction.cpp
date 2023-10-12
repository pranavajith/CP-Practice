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
    ll n,m,l;
    cin>>n>>m>>l;
    if (m==0){
        if (n){
            for (int i=0;i<=n;i++)cout<<0;cout<<"\n";
        }
        else{
            for (int i=0;i<=l;i++)cout<<1;cout<<"\n";
        }
    }
    else{
        string s;
        if (m==1)s.append("10");
        else{
            s.push_back('1');
            while (m>1){
                s.append("01");
                m-=2;
            }
            if (m)s.push_back('0');
        }
        string s2(l, '1');
        s2.append(s);
        // cout<<s2<<"!\n";
        if (n!=0){
            // cout<<"yes";
            if (s2.back()=='0'){
                string s3 (n, '0');
                s2.append(s3);
            }
            else{
                string s3(n, '0');
                s2.pop_back();
                s2.append(s3);
                s2.push_back('1');
                // s2.append(s3);
            }
        }
        // 1111110100 1111010101010000 10101000000 10101000000 10101000000 1010000001
        cout<<s2<<"\n";
    }
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