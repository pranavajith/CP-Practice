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
    ll n,m,q;
    cin>>n>>m>>q;
    string s;
    cin>>s;
    ll a,b;
    map <ll,bool> m1;
    vector <ll> v;
    while (m--) {
        cin>>a>>b;
        while (a<=b && !m1[a]){
            m1[a] = true;
            v.push_back(a);
            a++;
        }
        if (a!=b && a!=b+1) {
            ll b1 = b;
            while (!m1[b1]) b1--;
            b1++;
            while (b1 <= b) {
                m1[b1] = true;
                v.push_back(b1);
                b1++;
            }
        }
    }
    // for (auto d:v) cout<<d<<" "; cout<<"\n";
    map <ll, bool> m2, m3;

    for (int d = 1; d<=n; d++) {
        if (s[d-1] == '1') m2[d] = true;
    }
    ll count1 = count(s.begin(), s.end(), '1');
    ll intopk = 0;

    for (int i=0; i<min((ll)v.size(), count1); i++) {
        m3[v[i]] = true;
        if (s[v[i]-1] == '1') intopk++;
    }

    ll curiter = min((ll)v.size(), count1) - 1; 
    ll lol = 0;

    // for (auto d:v) cout<<d<<" "; cout<<"\n\n";

    while (q--) {
        cin>>a;
        if (!m2[a]){
            count1++;
            m2[a] = true;
            // if (m3[a])
            if (count1 > v.size()) {
                // cout<<"ok";
                if (m3[a]) intopk++;
                cout<<min((ll)v.size() - intopk, count1 - intopk) <<"\n";
                continue;
            }
            else {
                
                curiter++;
                if (a!=v[curiter]) {
                    if (m3[a]) intopk++; 
                    m3[v[curiter]] = true;
                    if (m2[v[curiter]]) intopk++;
                }
                else {
                    m3[a] = true;
                    intopk++;
                }
            }
        }
        else {
            m2[a] = false;
            count1--;
            if (count1 >= v.size()) {
                if (m3[a]) intopk--;
                // m2[a] = false;
                cout<<min((ll)v.size() - intopk, count1 - intopk) <<"\n";
                continue;
            }
            else {
                curiter--;
                if (a != v[curiter+1]) {
                    if (m3[a]) intopk--;
                    m3[v[curiter+1]] = false;
                    if (m2[v[curiter+1]]) intopk--;
                }
                else {
                    intopk--;
                    m3[v[a]] = false;
                }
            }
        }
        cout<<min((ll)v.size() - intopk, count1 - intopk) <<"\n";
    }

    // while (q--) {
    //     cin>>a;
    //     if (!m2[a]) {
    //         m2[a] = true;
    //         count1++;
            
    //         if ((int)curiter < (int)v.size()-1){
                
    //             curiter++;
    //             m3[v[curiter]] = true;
    //             if (a!=v[curiter] && m2[curiter] && m3[a]) {
    //                 intopk+=2;
    //             }
    //             else if (m2[v[curiter]] || m3[a]) intopk++;
    //         }
    //         else {
    //             // lol++; 
    //             if (m3[a]) intopk++;
    //         }
    //         // if (v[curiter] == a) {
    //         //     intopk++;
    //         // }
    //         // else {
    //         //     if (m3[a]) {
    //         //         intopk++;
                    
    //         //     }
    //         // }
    //     }
    //     else {
    //         count1--;
    //         if (a==v[curiter]) {
    //             intopk--;
    //         }
    //         else {
    //             if (m2[v[curiter]]) {
    //                 intopk--;
    //             }
    //             if (m3[a]) {
    //                 intopk--;}
    //         }
    //         m2[a] = false;
    //         if (count1<v.size()) {
    //             m3[v[curiter]] = false;
    //             curiter--;
    //         }
    //     }
    //     // cout<<"curiter : "<<curiter<<", intopk : "<<intopk<<", count1 : "<<count1<<" :: ";
    //     cout<<min(curiter+1-intopk, count1 - intopk)<<"\n";
    // }

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