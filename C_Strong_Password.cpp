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

// bool recurs(string s, string s1, string s2, int ind, int n, int sind){
//     if (ind==n)return true;
//     if (sind==s.size())return true;
//     for (char i = s1[ind]; i<=s2[ind]; i++){
//         while (sind<s.size() && s[sind]!=i)sind++;
//         if (sind==s.size())return true;
//         if (i==s2[ind])return false;
//         return recurs(s, s1, s2, ind+1, n, sind+1);
//     }
//     return false;
// }

void solve(){
    string s;
    cin>>s;
    ll n;
    cin>>n;
    string s1, s2;
    cin>>s1>>s2;
    // cout<<s1[0]<<"Yay";
    // vector <ll> iterind(n,0);
    ll iter = 0;
    for (int i=0; i<n;i++){
        // cout<<" i "<<i<<" ";
        ll maxind=0;
        for (char j=s1[i]; j<=s2[i]; j++){
            ll iter1=iter;
            while (iter1<s.size() && s[iter1]!=j)iter1++;
            // cout<<"!"<<iter1<<" ";
            if (iter1==s.size()){
                cout<<"YES\n";
                return;
            }
            // cout<<i<<" "<<iter1<<"\n";
            maxind = max(maxind, iter1);
        }
        iter=maxind+1;
    }
    cout<<"NO\n";

    // for (int i=0;i<n;i++){
    //     ll iter = 0;
    //     for (char i=s1[i]; i<=s2[i]; i++){
    //         while (iter<s.size() && i!=s[iter])iter++;
    //         if (iter==s.size()){
    //             cout<<"YES\n";
    //             return;
    //         }
    //     }
    // }
    // cout<<"NO\n";
    // if (recurs(s, s1, s2, 0, n, 0))cout<<"YES\n";
    // else cout<<"NO\n";
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