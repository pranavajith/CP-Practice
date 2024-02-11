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

bool sort1 (vector <ll> v1, vector <ll> v2) {
    return (v1[0] > v2[0]);
}
bool sort2 (vector <ll> v1, vector <ll> v2) {
    return v1[1] > v2[1];
}
bool sort3 (vector <ll> v1, vector <ll> v2) {
    return v1[2] > v2[2];
}



bool sort12 (vector <ll> v1, vector <ll> v2) {
    return (v1[0] > v2[0]) || (v1[0] == v2[0] && v1[1] < v2[1]);
}
bool sort13 (vector <ll> v1, vector <ll> v2) {
    return (v1[0] > v2[0]) || (v1[0] == v2[0] && v1[2] < v2[2]);
}
bool sort21 (vector <ll> v1, vector <ll> v2) {
    return (v1[1] > v2[1]) || (v1[1] == v2[1] &&  v1[0] < v2[0]) ;
}
bool sort23 (vector <ll> v1, vector <ll> v2) {
    return (v1[1] > v2[1]) || (v1[1] == v2[1] &&  v1[2] < v2[2]) ;
}
bool sort31 (vector <ll> v1, vector <ll> v2) {
    return (v1[2] > v2[2]) || (v1[2] == v2[2] &&  v1[0] < v2[0]) ;
}
bool sort32 (vector <ll> v1, vector <ll> v2) {
    return (v1[2] > v2[2]) || (v1[2] == v2[2] &&  v1[1] < v2[1]) ;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> a(n), b(n), c(n);
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<n; i++) cin>>b[i];
    for (int i=0; i<n; i++) cin>>c[i];
    vector <vector <ll> > v;
    for (int i=0; i<n; i++){
        vector <ll> temp;
        temp.push_back(a[i]); temp.push_back(b[i]); temp.push_back(c[i]); 
        v.push_back(temp);
    }
    ll ans = 0; ll ans1 = 0;
    vector <vector <ll> > umm1, v1 = v;
    sort(v1.begin(), v1.end(), sort1);
    umm1.push_back(v1[0]);
    umm1.push_back(v1[1]);
    umm1.push_back(v1[2]);
    v1[0][0] = -1, v1[0][1] = -1, v1[0][2] = -1;
    v1[1][0] = -1, v1[1][1] = -1, v1[1][2] = -1;
    v1[2][0] = -1, v1[2][1] = -1, v1[2][2] = -1;
    sort(v1.begin(), v1.end(), sort2);
    umm1.push_back(v1[0]);
    umm1.push_back(v1[1]);
    umm1.push_back(v1[2]);
    v1[0][0] = -1, v1[0][1] = -1, v1[0][2] = -1;
    v1[1][0] = -1, v1[1][1] = -1, v1[1][2] = -1;
    v1[2][0] = -1, v1[2][1] = -1, v1[2][2] = -1;
    sort(v1.begin(), v1.end(), sort3);
    umm1.push_back(v1[0]);
    umm1.push_back(v1[1]);
    umm1.push_back(v1[2]);

    v = umm1;
    vector <vector <ll> > temp1;

    // for (auto d:v){
    //     for (auto e:d) cout<<e<<" "; cout<<"\n";
    // }

    // 1
    temp1 = v;
    sort(temp1.begin(), temp1.end(), sort12);
    ans1 += temp1[0][0];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort23);
    ans1 += temp1[0][1];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort3);
    ans1 += temp1[0][2];
    ans = max(ans, ans1);
    // cout<<ans1<<" ";

    // 2
    temp1 = v;
    ans1 = 0;
    sort(temp1.begin(), temp1.end(), sort13);
    ans1 += temp1[0][0];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort32);
    ans1 += temp1[0][2];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort2);
    ans1 += temp1[0][1];
    ans = max(ans, ans1);
    // cout<<ans1<<" ";

    // 3
    temp1 = v;
    ans1 = 0;
    sort(temp1.begin(), temp1.end(), sort21);
    ans1 += temp1[0][1];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort13);
    ans1 += temp1[0][0];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort3);
    ans1 += temp1[0][2];
    ans = max(ans, ans1);
    // cout<<ans1<<" ";

    // 4
    temp1 = v;
    ans1 = 0;
    sort(temp1.begin(), temp1.end(), sort23);
    ans1 += temp1[0][1];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort31);
    ans1 += temp1[0][2];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort1);
    ans1 += temp1[0][0];
    ans = max(ans1, ans);
    // cout<<ans1<<" ";

    // 5
    temp1 = v;
    ans1 = 0;
    sort(temp1.begin(), temp1.end(), sort31);
    ans1 += temp1[0][2];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort12);
    ans1 += temp1[0][0];
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort2);
    ans1 += temp1[0][1];
    ans = max(ans, ans1);
    // cout<<ans1<<" ";

    // 6
    // cout<<"\n\n";
    temp1 = v;
    ans1 = 0;
    sort(temp1.begin(), temp1.end(), sort32);
    // for (auto d:temp1){
    //     for (auto e:d) cout<<e<<" "; cout<<"\n";
    // }
    // cout<<"\n";
    
    ans1 += temp1[0][2];
    // cout<<ans1<<"\n\n";
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort21);
    // for (auto d:temp1){
    //     for (auto e:d) cout<<e<<" "; cout<<"\n";
    // }
    // cout<<"\n";
    ans1 += temp1[0][1];
    // cout<<ans1<<"\n\n";
    temp1[0][0] = -1, temp1[0][1] = -1, temp1[0][2] = -1;
    sort(temp1.begin(), temp1.end(), sort1);
    // for (auto d:temp1){
    //     for (auto e:d) cout<<e<<" "; cout<<"\n";
    // }
    // cout<<"\n";
    
    ans1 += temp1[0][0];
    // cout<<ans1<<"\n\n";
    ans = max(ans, ans1);
    // cout<<ans1<<" ";

    cout<<ans<<"\n";



    // vector <vector <ll> > v1, v2;
    // v1 = v, v2 = v; 
    // sort(v.begin(), v.end(), sort1);
    // sort(v1.begin(), v1.end(), sort2);
    // sort(v2.begin(), v2.end(), sort3);
    // vector <vector <vector <ll> > > vbig; 
    // vbig.push_back(v);
    // vbig.push_back(v1);
    // vbig.push_back(v2);
    // ll ans = -1;
    // for (int i=0; i<3; i++) {
    //     vector <vector <ll> > v3 = v;
        
    //     // for (int j=0; j<3; j++) {
    //     //     if (i==j) continue;
    //     //     ll temp;
    //     //     temp += vbig[i][0][0];
    //     //     ll check1 = 0;
    //     //     if (vbig[j][0] == vbig[i][0]) check1++;
    //     //     temp += vbig[j][check1][1];
    //     //     ll check2 = 0, cnt = 0;
    //     //     while (vbig[3-i-j][check2] == vbig[i][])
    //     //     // if (vbig[i][0] == vbig[j][0]) {
    //     //     //     temp+=vbig[j][1][1];
    //     //     //     ll check = 0;
    //     //     //     while (vbig[3-i-j][check] == vbig[i][0] | vbig[3-i-j][check] == vbig[j][1])  check++;
    //     //     //     temp += vbig[3-i-j][check][2];
    //     //     // }
    //     //     // else {
    //     //     //     temp+=vbig[j][0][1];
    //     //     //     ll check = 0;
    //     //     //     while (vbig[3-i-j][check] == vbig[i][0] | vbig[3-i-j][check] == vbig[j][0])  check++;
    //     //     //     temp += vbig[3-i-j][check][2];
    //     //     // }
    //     //     ans = max(ans, temp);
    //     // }
    // }
    // cout<<ans<<"\n";
    
    // // sort(a.rbegin(), a.rend());
    // // sort(b.rbegin(), b.rend());
    // // sort(c.rbegin(), c.rend());
    // // vector <ll> a1(3), b1(3), c1(3);
    // // for (int i=0; i<3; i++) {
    // //     a1[i] = a[i];
    // //     b1[i] = b[i];
    // //     c1[i] = c[i];
    // // }
    // // cout<<max(a1[0] + b1[1] + c1[2], max(a1[0] + b1[2] + c1[3], max(a1[1] + b1[0] + c1[2], max(a1[1] + b1[2] + c1[0], max(a1[2] + b1[0] + c1[1], a1[2] + b1[1] + c1[0]))))) <<"\n";
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