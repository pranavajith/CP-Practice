#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count1=1;
    while(true){
        string s1="";
        if (count1<=26){
            s1='a'+count1-1;
        }
        else if (count1<=702){
            ll count2=count1-26;
            char first = 'a'+((count2-1)/26)-1;
            char second = 'a'+(count2-1-26*((count2-1)/26));
            s1+=first;
            s1+=second;
        }
        else{
            ll count2=count1-702;
             char first = 'a'+((count2-1)/576);
            ll lol = (count2-1-576*((count2-1)/576));
            char second = 'a'+((lol-1)/26);
            char third = 'a'+((lol-1)-26*((lol-1)/26));
            s1+=first;
            s1+=second;
            s1+=third;
        }
        bool isFound = s.find(s1) == string::npos;
        if (isFound){
            cout<<s1<<"\n";
            break;
        }
        cout<<"hey!";
    }
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}