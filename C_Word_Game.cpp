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
    map <string,bool> m1, m2, m3;
    ll n; cin>>n;
    set <string> s;
    for (int i=0; i<n; i++) {
        string a; cin>>a; m1[a] = true;
        s.insert(a);
    }
    for (int i=0; i<n; i++) {
        string a; cin>>a; m2[a] = true;
        s.insert(a);
    }
    for (int i=0; i<n; i++) {
        string a; cin>>a; m3[a] = true;
        s.insert(a);
    }
    ll pt1 = 0, pt2 = 0, pt3 = 0;
    for (auto d:s){
        if (m1[d]){
            if (m2[d] && m3[d]) continue;
            else if (m2[d] || m3[d]){
                pt1++;
                if (m2[d]) pt2++;
                else pt3++;
            }
            else pt1+=3;
        }
        else if (m2[d]){
            pt2++;
            if (m3[d]) pt3++;
            else pt2+=2;
        }
        else if (m3[d]) pt3 += 3;
    }
    cout<<pt1<<" "<<pt2<<" "<<pt3<<"\n";

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