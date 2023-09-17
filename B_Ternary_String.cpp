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
    string s;
    cin>>s;
    // s+='W';
    // cout<<s;
    ll n = s.size();
    // n++;
    set <ll> se;
    bool check = false;
    for (ll i=0;i<n;i++){
        // cout<<i;
        // cout<<"hey!";
        se.insert(s[i]-'0');
    }
    if (se.size()<3)cout<<0<<"\n";
    else{
        vector <vector <ll> > v;
        ll count1 = 0, a;
        for (ll i=0;i<=n;i++){
            // cout<<i;
            if (i==0){
                count1++;
                a=s[i]-'0';
                // cout<<"first!";
            }
            else{
                if (i==n){
                    if (s[n-1]==s[n-2]){
                        vector <ll> temp;
                        temp.push_back(s[n-1]-'0');
                        temp.push_back(count1);
                        v.push_back(temp);
                    }
                    else{
                        if (!check){
                            // cout<<"hi!";
                        vector <ll> temp;
                        temp.push_back(s[n-2]-'0');
                        temp.push_back(count1);
                        v.push_back(temp);
                        }
                        vector <ll> temp1;
                        temp1.push_back(s[n-1]-'0');
                        temp1.push_back(1);
                        v.push_back(temp1);
                    }
                }
                else if (s[i]-'0' == a){
                    count1++;
                }
                else{
                    // cout<<i<<"! ";
                    if (i==n-1){check = true;}
                    vector <ll> v1;
                    v1.push_back(a);
                    v1.push_back(count1);
                    v.push_back(v1);
                    a=s[i]-'0';
                    count1=1;
                }
            }
        }
        // cout<<"hey!";
        ll ans = INT_MAX;
        // for (auto d:v)cout<<d[0]<<"!! "<<d[1]<<"\n";
        for (ll i=0;i<v.size()-2;i++){
            if (v[i][0] != v[i+1][0] && v[i+1][0] != v[i+2][0] && v[i+2][0] != v[i][0]){
                ans = min(ans, v[i+1][1]+2);
            }
        }
        cout<<ans<<"\n";
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