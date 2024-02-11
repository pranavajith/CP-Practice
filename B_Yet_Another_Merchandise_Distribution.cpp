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

bool sort1(string s1, string s2) {
    return (s1[s1.size()-1] > s2[s2.size()-1]) || ((s1[s1.size()-1] == s2[s2.size()-1]) && s1[0] < s2[0]);
    // return (s1[0] > s2[0]);
    // return (s1[s1.size()-1] > s2[s2.size()-1]);
}
void solve(){
    ll n;
    cin>>n;
    vector <string> v(n);
    map <string, ll> m;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        m[v[i]]++;
    }
   while (m["9-XS"]--) cout<<"9-XS ";
   while (m["8-XS"]--) cout<<"8-XS ";
   while (m["7-XS"]--) cout<<"7-XS ";
   while (m["6-XS"]--) cout<<"6-XS ";
   while (m["5-XS"]--) cout<<"5-XS ";
   while (m["4-XS"]--) cout<<"4-XS ";
   while (m["3-XS"]--) cout<<"3-XS ";
   while (m["2-XS"]--) cout<<"2-XS ";
   while (m["1-XS"]--) cout<<"1-XS ";
   while (m["M"]--) cout<<"M ";
   while (m["1-XL"]--) cout<<"1-XL ";
   while (m["2-XL"]--) cout<<"2-XL ";
   while (m["3-XL"]--) cout<<"3-XL ";
   while (m["4-XL"]--) cout<<"4-XL ";
   while (m["5-XL"]--) cout<<"5-XL ";
   while (m["6-XL"]--) cout<<"6-XL ";
   while (m["7-XL"]--) cout<<"7-XL ";
   while (m["8-XL"]--) cout<<"8-XL ";
   while (m["9-XL"]--) cout<<"9-XL ";
   cout<<"\n";
    // sort(v.begin(), v.end());
    // for (auto d:v) cout<<d<<" "; cout<<"\n";

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