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
    int n;
    cin>>n;
    vector <int> v(n), counter(n+1, 0);
    // set <int> s;
    for (int i=0; i<n; i++){
        cin>>v[i];
        counter[v[i]]++;
    }
    // sort(v.begin(), v.end());
    int maxel = *max_element(v.begin(), v.end());
    int sol=0, iter = 0;
    // vector <int> checked;
    while (iter<n-1){
        int cursum = v[iter];
        for (int i=iter+1; i<n; i++){
            cursum+=v[i];
            // cout<<cursum<<"\n";
            if (cursum > maxel)break;
            sol+=counter[cursum];
            counter[cursum]=0;
            // checked.push_back(cursum);

        }
        iter++;
    }
    // for (auto d:checked)cout<<d<<" ";
    // cout<<"\n";
    // ll sol=0;
    // for (int i=0; i<checked.size();i++){
    //     sol+=counter[checked[i]];
    //     counter[checked[i]]=0;
    // }   
    cout<<sol<<"\n";
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