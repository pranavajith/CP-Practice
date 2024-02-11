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


// int countSubStrings(string str, int k) 
// {
//     vector <int> v;
//     int cnt = 1; char c= str[0];
//     for (int i=1; i<str.size(); i++) {
//         if (str[i]==c) {
//             cnt++;
//             if (i==str.size()-1) v.push_back(cnt);
//         }
//         else {
//             v.push_back(cnt);
//             cnt = 1, c = str[i];
//             if (i==str.size()-1) v.push_back(cnt);
//         }
//     }
//     for (auto d:v) cout<<d<<" "; cout<<"\n";
//     if (v.size() < k) return 0;
//     long long ans = 0;
//     int r = k-1;
//     while (r<v.size()) {
//         ans += v[r] * v[r-k+1];
//         r++;
//     }
//     return ans;
// }

// int main(){
//     string s = "urrrzaxxxhjjquooxzgwzpppavcfaxeefnggtsii";
//     cout<<countSubStrings(s, 5)<<"\n";
//     return 0;
// }


string revWords(string str) {
    // Write your code here.
    vector <string> v;
    
    int r = 0, n = str.size();
    while (r<n) {
        string ans = "";
        while (r<n && str[r] != ' ') ans += str[r++];
        v.push_back(ans);
        r++;
    }
    string ans1 = "";
    reverse(v.begin(), v.end());
    for (string d:v) ans1.append(d);
    return ans1;
}

int main(){
    string s = "Welcome   to Coding Ninjas";
    cout<<revWords(s)<<"\n";
}