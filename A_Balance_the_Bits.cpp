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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll k = count(s.begin(), s.end(), '1');
    if (n%2 || s[0]=='0' || s[n-1]=='0' || k%2){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        string a(n, ')'), b(n, ')');
        ll temp = 0;
        for (int i=0; i<n; i++){
            if (temp==k/2)break;
            if (s[i]=='1'){
                a[i]='(';
                b[i]='(';
                temp++;
            }
        }
        temp = 0;
        for (int i=0; i<n; i++){
            if (s[i]=='0'){
                if (temp%2==0){
                    temp++;
                    a[i]='('; b[i]=')';
                }
                else{
                    temp++;
                    a[i]=')'; b[i]='(';
                }
            }
        }
        cout<<a<<"\n"<<b<<"\n";
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