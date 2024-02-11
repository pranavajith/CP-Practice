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
    ll n,a;
    cin>>n;
    deque <ll> q1, q2, q3, q4;
    for (int i=0; i<n; i++){
        cin>>a;
        q1.push_back(a);
        q2.push_back(a);
        q3.push_back(a);
        q4.push_back(a);
    }

    ll minscore1 = 0, maxscore1 = 0;
    while (q1.size()){
        if (q1.front() > q1.back()) {
            maxscore1 += q1.front(); q1.pop_front();
        }
        else {
            maxscore1 += q1.back(); q1.pop_back();
        }
        if (q1.size() == 0) break;
        if (q1.front() > q1.back()) {
            minscore1 += q1.front(); q1.pop_front();
        }
        else {
            minscore1 += q1.back(); q1.pop_back();
        }
        // cout<<maxscore1<<" "<<minscore1<<" !\n";
    }
    ll ans1 = abs(maxscore1 - minscore1);
    // ll minscore2 = 0, maxscore2 = 0;
    // while (q2.size()){
    //     if (q2.front() < q2.back()) {
    //         minscore2 += q2.front(); q2.pop_front();
    //     }
    //     else {
    //         minscore2 += q2.back(); q2.pop_back();
    //     }
    //     if (q2.size() == 0) break;
    //     if (q2.front() > q2.back()) {
    //         maxscore2 += q2.front(); q2.pop_front();
    //     }
    //     else {
    //         maxscore2 += q2.back(); q2.pop_back();
    //     }
    // }
    // // ll ans2 = abs(maxscore2 - minscore2);
    // ll ans2 = LLONG_MAX;
    ll minscore3 = 0, maxscore3 = 0;
    while (q3.size()){
        if (q3.front() >= q3.back()) {
            minscore3 += q3.front(); q3.pop_front();
        }
        else {
            minscore3 += q3.back(); q3.pop_back();
        }
        if (q3.size() == 0) break;
        if (q3.front() >= q3.back()) {
            maxscore3 += q3.front(); q3.pop_front();
        }
        else {
            maxscore3 += q3.back(); q3.pop_back();
        }
    }
    ll ans3 = abs(maxscore3 - minscore3);

    cout<<max(ans1, ans3)<<"\n";
    // ll minscore4 = 0, maxscore4 = 0;
    // while (q4.size()){
    //     if (q4.front() >= q4.back()) {
    //         maxscore4 += q4.front(); q4.pop_front();
    //     }
    //     else {
    //         maxscore4 += q4.back(); q4.pop_back();
    //     }
    //     if (q4.size() == 0) break;
    //     if (q4.front() <= q4.back()) {
    //         minscore4 += q4.front(); q4.pop_front();
    //     }
    //     else {
    //         minscore4 += q4.back(); q4.pop_back();
    //     }
    // }
    // ll ans4 = abs(maxscore4 - minscore4);
    // cout<<max(max(ans1,ans2), max(ans3, ans4))<<"\n";
    // cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<" ";
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