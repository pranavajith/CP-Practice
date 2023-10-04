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
    string s1,s2;
    cin>>s1>>s2;
    map <char, ll> m1, m2;
    bool checkauto = true;
    // if (s1.size()!=s2.size())checkarr = false;


    for (int i=0;i<s1.size();i++)m1[s1[i]]++;
    for (int i=0;i<s2.size();i++)m2[s2[i]]++;

    for (auto d:m2){
        if (m1[d.first]<d.second){
            cout<<"need tree\n";
            return;
        }
    }
    if (s1.size()==s2.size())cout<<"array\n";
    else{
        ll s2iter = 0, s1iter = 0;
        while (s1iter!=s1.size()){
            while (s1iter!=s1.size() && s1[s1iter]!=s2[s2iter])s1iter++;
            s2iter++;
            if (s1iter==s1.size())break;
            s1iter++;
            if (s2iter==s2.size()){
                cout<<"automaton\n";
                return;
            }
        }
        cout<<"both\n";
        return;
    }
    // for (auto d:m2){
    //     if (m1[d.first]<d.second){
    //         check1=false;
    //         // break;
    //     }
    //     if (m1[d.first]>d.second){
    //         check2=false;
    //     }
    // }
    // if (!check)
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