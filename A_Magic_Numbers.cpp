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

// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

#define ll long long
// void solve(){
//     string s;
//     cin>>s;
//     for (int i=0;i<s.size();i++){
//         if ((s[i]!='1' && s[i]!='4') || (i==0 && s[i]=='4') || (i>1 && s[i-1]=='4' && s[i-2]=='4' && s[i]=='4')){
//             cout<<"NO\n";
//             return;
//         }
//     }
//     cout<<"YES\n";
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     // TxtIO;
//     // ll t; cin>>t; while(t--)
//         solve();
//     return 0;
// }

int main(){
 string n;
 cin>>n;
 while(!n.empty()){
    if (n.size()>2 && n.rfind("144")==n.size()-3) n.erase(n.size()-3);
    else if(n.size()>1 && n.rfind("14")==n.size()-2) n.erase(n.size()-2);
    else if(n.rfind("1")==n.size()-1) n.erase(n.size()-1);
    else {
        cout<<"NO";
        return 0;}
 }
 cout<<"YES";

return 0;
}