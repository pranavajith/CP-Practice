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
    map <char, ll> m;
    // ll countA=0, countB=0, countC=0;
    for (int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    // if (s[0]==s[s.size()-1] || (countA+countB!=countC && countA+countC!=countB && countB + countC != countA))cout<<"NO\n";
    if (s[0]==s[s.size()-1])cout<<"NO\n";
    else{
        if (((s[0]=='A' && s[s.size()-1]=='C') || (s[0]=='C' && s[s.size()-1]=='A'))  && (m['A']+m['B']!=m['C'] && m['A']!=m['B']+m['C']))cout<<"NO\n";
        else if (((s[0]=='A' && s[s.size()-1]=='B') || (s[0]=='B' && s[s.size()-1]=='A'))  && (m['A']+m['C']!=m['B'] && m['A']!=m['B']+m['C']))cout<<"NO\n";
        else if (((s[0]=='C' && s[s.size()-1]=='B') || (s[0]=='B' && s[s.size()-1]=='C'))  && (m['A']+m['C']!=m['B'] && m['C']!=m['B']+m['A']))cout<<"NO\n";
        else cout<<"YES\n";
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