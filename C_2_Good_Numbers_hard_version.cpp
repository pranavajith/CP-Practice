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

vector <ll> pow3;

void solve(){
    vector <ll> pow3temp (pow3.begin(), pow3.end());
    ll n;
    cin>>n;
    ll original = n;
    string s; bool check = false;
    for (int i=0; i<39; i++){
        if (n>=2*pow3temp[i]){
            s+='2';
            check = true;
            n%=(2*pow3temp[i]);
        }
        else if (n>=pow3temp[i]){
            s+='1';
            check = true;
            n%=pow3temp[i];
        }
        else if (check==true){
            s+='0';
        }
    }
    // cout<<s<<"\n";
    if (count(s.begin(), s.end(), '2')==0) cout<<original<<"\n";
    else {
        reverse(pow3temp.begin(),pow3temp.end());
        ll ind = s.find('2');
        // cout<<ind<<"\n";
        if (ind == 0) {
            cout<<pow3temp[s.size()]<<"\n";
        }
        else {
            for (int i=ind-1; i>=0; i--) {
                if (s[i]=='0') {
                    s[i] = '1';
                    for (int j=i+1; j<s.size(); j++) s[j]='0';
                    reverse(s.begin(),s.end());
                    // reverse(pow3.begin(),pow3.end());
                    for (int j=s.size(); j<39; j++) s+='0';
                    ll ans = 0;
                    for (int i=0; i<39; i++){
                        ans += (s[i]-'0') * pow3temp[i];
                    }
                    cout<<ans<<"\n";
                    return;
                }
            }
            cout<<pow3temp[s.size()]<<"\n";
        }
        // bool check2 = false;
        // bool check0 = false;
        // reverse(pow3temp.begin(),pow3temp.end());
        
        // for (int i=0; i<s.size(); i++){
        //     // if (s[i]==)
        //     if (s[i]=='2') break;
        //     if (s[i]=='0') {
        //         s[i] = '1';
        //         for (int j=i+1; j<s.size(); j++) s[j]='0';
        //         reverse(s.begin(),s.end());
        //         // reverse(pow3.begin(),pow3.end());
        //         for (int j=s.size(); j<39; j++) s+='0';
        //         ll ans = 0;
        //         for (int i=0; i<39; i++){
        //             ans += (s[i]-'0') * pow3temp[i];
        //         }
        //         cout<<ans<<"\n";
        //         return;
        //     }
        // }
        // cout<<pow3temp[s.size()]<<"\n";
    }
}

int main() 
{
    pow3.push_back(1);
    for (int i=0; i<38; i++){
        pow3.push_back(pow3.back()*3);
    }
    reverse(pow3.begin(), pow3.end());
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}