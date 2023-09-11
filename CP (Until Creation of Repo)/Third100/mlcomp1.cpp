#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

vector <int> solve(int N, string S){
    vector <int> v;
    // int ind = 0;
    for (int i=0;i<N-1;i++){ 
        int a = 0, b = i+1; 
        int sol = 0;
        while (S[a]==S[b] && a!=i+1 && b!=N){
            // cout<<"a: "<<a<<" b: "<<b<<"\n";
            sol++;a++;b++;
        }
        v.push_back(sol);
    }
    // for (auto d:v){
    //     cout<<d<<" ";
    // }
    return v;
}

int main() 
{
    // TxtIO;
    ll t=1;
    // cin>>t;
    while(t--){
        // solve(3,"aaa");
        solve(7,"abaaaba");
    }
    return 0;
}