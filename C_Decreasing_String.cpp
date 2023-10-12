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

string lol(string s){
    ll n = s.size();
    for (int i=0; i<n-1;i++){
        if (s[i]>s[i+1]){
            return s.substr(0, i)+s.substr(i+1, n-i-1);
        }
    }
    return s.substr(0, n-1);
}

void solve(){
    // cout<<lol("cab")<<"\n";
    string s;
    cin>>s;
    // cout<<"string recieved!";
    ll m, n = s.size();
    cin>>m;
    
    // cout<<"here we go!";
    // ll a = 0;
    // while (n*(n+1)/2 - a*(a+1)/2 > m){
    //     a++;
    //     cout<<"hey!";
    // }
    // ll a = n; 
    // // cout<<"here! "<<a*(a+1)/2;
    // while (a*(a+1)/2 > m){
    //     a--;
    //     // cout<<"hey!";1
    // }
    // // cout<<"ok";
    // // cout<<a;
    // // cout<<"here! "<<a;
    // // if (a*(a+1)/2 != m)a--;
    // ll prev = m - (a*(a+1)/2);
    // if (a*(a+1)/2 != m){
    //     // prev = m - (n*(n+1)/2 - a*(a-1)/2)-1;
    //     prev = m - (a*(a-1)/2)-1;
    //     // cout<<"ok!";
    // }
    // cout<<"prev "<<prev;
    // a--;
    // cout<<"a: "<<a<<" ";
    // // a--;
    // while (a-- > 0){
    //     s=lol(s);
    //     // cout<<s<<"<-s ";
    // }
    // // cout<<s<<" "<<prev<<" "<<s[prev]<<"\n";
    // cout<<s[prev];
    // // cout<<s;
    ll a = n, cursum = a, iter = 0, prevcursum = 0;
    while (cursum < m){
        prevcursum = cursum;
        // cout<<cursum<<"\n";
        a--;
        cursum+=a;
        iter++;
    }
    // cout<<a<<" "<<iter<<"\n";
    // while (iter--)s = lol(s);
    // cout<<s<<" "<<n;
    vector <ll> v(n, -1);
    ll counter = 1;
    for (int i=0; i<n-1; i++){
        if (s[i]>s[i+1]){
            v[i]=counter;
            counter++;
        }
    }
    for (int i=n-1; i>=0; i--){
        if (v[i]==-1){
            v[i]=counter;
            counter++;
        }
    }
    // for (auto d:v)cout<<d<<" ";
    string s1;
    for (int i=0; i<n;i++){
        if (n-a < v[i])s1.push_back(s[i]);
    }
    // cout<<m-prevcursum<<" lol!";
    cout<<s1[m-prevcursum-1];

}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout<<"ok";
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}