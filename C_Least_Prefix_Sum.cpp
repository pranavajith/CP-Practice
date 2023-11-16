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
    ll n,m;
    cin>>n>>m; 
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> temp; 
    ll ans = 0, cursum = 0; 
    if (v[m-1] > 0 && m!=1)ans++;
    cursum -= abs(v[m-1]); ll cursumM = cursum; cursum = 0;
    for (int i=m-2; i>=0; i--){
        cursum -= v[i];
        if (v[i]>0)temp.push_back(v[i]);
        if (cursum < cursumM){
            sort(temp.begin(), temp.end());
            while (temp.size()>0){
                if (cursum >= cursumM)break;
                ans++; cursum += (2*temp.back()); temp.pop_back();
            }
            // for (int i=0; i<temp.size(); i++){
            //     if (cursum >= cursumM)break;
            //     ans++;
            //     cursum += (2*temp.back()); temp.pop_back();
            // }
        }
    }
    vector <ll> temp2;
    cursum = 0;
    for (int i=m; i<n; i++){
        cursum+=v[i];
        if (v[i]<0)temp2.push_back(abs(v[i]));
        if (cursum<0){
            sort(temp2.begin(), temp2.end());
            while (temp2.size()>0){
                if (cursum >= 0)break;
                ans++; cursum += (2*temp2.back()); temp2.pop_back();
            }
            // for (int i=0; i<temp2.size(); i++){
            //     if (cursum>=0)break;
            //     ans++;
            //     cursum+=(2*temp2.back()); temp2.pop_back();
            // }
        }
    }
    // if (n==1){
    //     cout<<0<<"\n";
    //     return;
    // }
    cout<<ans<<"\n";
    // if (ans == 14) cout<<n<<" "<<m<<" "<<v[m-1]<<"\n";
    // ll n,m,a, sumprev = 0, minsumprev = INT_MAX, ans = 0; bool check1 = false;
    // cin>>n>>m;
    // vector <ll> prev, post;
    // for (int i=0; i<m; i++){
    //     cin>>a;
    //     if (i==m-1){
    //         if (a>0){
    //             ans++;
    //             sumprev-=a;
    //         }
    //         else{
    //             sumprev+=a;
    //         }
    //         if (sumprev <= minsumprev){
    //             check1 = true;
    //         }
    //         break;
    //     }
    //     sumprev+=a;
    //     if (sumprev <= minsumprev){
    //         minsumprev = sumprev;
    //         prev.clear();
    //     }
    //     else{
    //         if (a>0)prev.push_back(a);
    //     }
    // }
    // if (!check1){
    //     sort(prev.rbegin(), prev.rend());
    //     for (int i=0; i<prev.size(); i++){
    //         if (sumprev <= minsumprev)break;
    //         ans++;
    //         sumprev -= (2*prev[i]);
    //         // cout<<prev[i]<<" ";
    //     }
    // }
    // // cout<<ans<<"\n";
    // ll sumpast = 0, minsumpast = 0;
    // for (int i=m; i<n; i++){
    //     cin>>a;
    //     sumpast+=a;
    //     if (a<0)post.push_back(-1*a);
    //     if (sumpast < 0){
    //         sort(post.begin(), post.end());
    //         for (int i=0; i<post.size(); i++){
    //             if (sumpast >= 0)break;
    //             sumpast += (2*post.back());
    //             post.pop_back();
    //             ans++;
    //         }
    //     }
    // }
    // if (n==1){
    //     cout<<0<<"\n";
    //     return;
    // }
    // cout<<ans<<"\n";
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