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

// void solve(){
//     ll x,k;
//     cin>>x>>k;
//     multiset < vector <pair <ll,ll> > > s;
//     for (int i=0; i<k; i++){
//         vector <ll> v;
//         ll a; cin>>a;
//         bool check = true;
//         while (a--) {
//             ll b;
//             cin>>b;
//             if (b>=0 && check) x+=b;
//             else {
//                 check = false;
//                 v.push_back(b);
//             }
//         }
//         ll suffcheck = 0;
//         ll j = v.size()-1;
//         while (j>=0 && v.size()){
//             suffcheck += v[j];
//             if (suffcheck <= 0) {
//                 suffcheck = 0;
//                 v.erase(v.begin()+j, v.end());
//             }
//             j--;
//         }
//         // for (auto d:v) cout<<d<<" "; cout<<"\n"; cout<<"ok\n";
//         if (v.size() != 0) {
//             vector <pair <ll,ll> > temp; ll negreq = 0, incr = 0;
//             reverse(v.begin(), v.end());
//             pair <ll,ll> p;
//             // for (auto d:v) cout<<d<<" "; cout<<"\n"; cout<<"ok\n";
//             bool lol = false;
//             ll cursum = 0;
//             while (v.size()) {
//                 if (v.back() > 0) lol = true;
//                 p.second = cursum;
//                 if (v.back() < 0) {
//                     if (lol && cursum > 0) {
//                         p.first = negreq;
//                         temp.push_back(p);
//                         negreq = 0;
//                         cursum = 0;
//                         lol = false;
//                     }
//                     negreq += -1 * v.back();
//                     p.first = negreq;
//                 }
//                 cursum += v.back();
//                 v.pop_back();

//             }
//             p.second = cursum;
//             temp.push_back(p);
//             // cout<<temp.size()<<"\n";
//             // for (auto d:temp) {
//             //     cout<<" {"<<d.first<<", "<<d.second<<"}\n";
//             // }
//             reverse(temp.begin(), temp.end());
//             while (temp.size() && x >= temp.back().first){
//                 x += temp.back().second;
//                 temp.pop_back();
//             }
//             reverse(temp.begin(), temp.end());
//             if (temp.size()) s.insert(temp);

//         }
//     //     cout<<s.size()<<" ohk\n";
//     //     cout<<"\n\n"<<x<<" yay\n";
//     // for (auto d:s){
//     //     for (auto e:d){
//     //         cout<<e.first<<" : "<<e.second<<"\n";
//     //     }
//     //     cout<<"!!\n\n";
//     // }
//         // for (auto d:v) cout<<d<<" "; cout<<"\n"; cout<<"ok";

//     }
//     // cout<<"\n\n"<<x<<" yay\n";
//     // for (auto d:s){
//     //     for (auto e:d){
//     //         cout<<e.first<<" "<<e.second<<"\n";
//     //     }
//     //     cout<<"!!\n\n";
//     // }

//     while (s.size()){
//         ll check1 = 0;
//         for (auto d:s){
//             if (d[0].first > x) check1++;
//         }
//         if (check1 == s.size()) break;
//         vector <pair <ll,ll> > a1;
//         a1 = *(s.begin());
//         s.erase(s.begin());
//         reverse(a1.begin(), a1.end());
//         while (a1.size() && a1.back().first <= x){
//             x+=a1.back().second;
//             a1.pop_back();
//         }
//         if (a1.size()) {
//             reverse(a1.begin(), a1.end());
//             s.insert(a1);
//         }
//     }
//     cout<<x<<"\n";
// }

void solve() {
    ll x,k;
    cin>>x>>k;
    multiset <vector <pair <ll,ll> > > s;
    while (k--){
        ll numofel; cin>>numofel;
        bool firstneg = false;
        vector <ll> v;
        ll a;
        for (ll i=0; i<numofel; i++) {
            cin>>a;
            if (a < 0) firstneg = true;
            if (firstneg)  v.push_back(a); 
            else x+=a;
        }
        ll suffixsum = 0;
        for (ll i=v.size()-1; i>=0; i--){
            suffixsum += v[i];
            if (suffixsum <= 0) {
                v.erase(v.begin() + i, v.end());
                suffixsum = 0;
            }
        }
        
        if (v.size()) {
            vector <pair <ll,ll> > v1;
            pair <ll,ll> p;
            bool everpositive = false;
            ll cursum = 0, negreq = 0;
            for (ll i=0; i<v.size(); i++) {
                if (v[i] < 0) {
                    if (!everpositive || cursum <= 0) {
                        negreq += -1 * v[i];
                        cursum += v[i];
                    }
                    else {
                        p.first = negreq;
                        p.second = cursum;
                        cursum = v[i];
                        v1.push_back(p);
                        negreq = -1 * v[i];
                        
                    }
                }
                else {
                    everpositive = true;
                    cursum += v[i];
                }
            }
            p.first = negreq; p.second = cursum; v1.push_back(p);
            reverse(v1.begin(), v1.end());
            while (v1.size() && v1.back().first <= x) {
                x+= v1.back().second; v1.pop_back();
            }
            if (v1.size()) s.insert(v1);
        }
    }
    // for (auto d:s){
    //     for (auto e:d) cout<<e.first<<" : "<<e.second<<", ";
    //      cout<<"\n";
    // }
    // cout<<"here is prev x :"<<x<<"\n\n";
    while (s.size()){
        // ll check1 = 0;
        // for (auto d:s){
        //     if (d.back().first > x) check1++;
        // }
        // if (check1 == s.size()) break;
        vector <pair <ll,ll> > v;
        auto it = s.begin();
        for (; it != s.end(); it++){
            v = *it;
            if (v.back().first <= x){
                while (v.size() && v.back().first <= x) {
                    x += v.back().second; v.pop_back();
                }
                s.erase(it);
                if (v.size()){
                    s.insert(v);
                }
                break;
            }
        }
        if (it == s.end()) break;
        // v = *(s.begin());
        // s.erase(s.begin());
        // reverse(v.begin(), v.end());
        // while (v.size() && v.back().first <= x){
        //     x+=v.back().second; v.pop_back();
        // }
        // if (v.size()) s.insert(v);
    }
    cout<<x<<"\n";
}

// 1000000000
// 100000000
//  99999999

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
} 