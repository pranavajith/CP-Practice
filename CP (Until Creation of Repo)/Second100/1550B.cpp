#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    // ll n,a,b;
    // cin>>n>>a>>b;
    // string s;
    // cin>>s;
    // if (a+b >= 0){
    //     cout<<n*(a+b)<<endl;
    // }
    // else{
    //     vector <ll> v;
    //     char w = s[0];
    //     ll count1=1;
    //     for (int i=1;i<s.size();i++){
    //         if (s[i]!=w){
    //             v.push_back(count1);
    //             count1=1;
    //             w=s[i];
    //         }
    //         else{
    //             count1++;
    //         }
    //     }
    //     v.push_back(count1);
    //     // for (auto d:v){
    //     //     cout<<d<<" ";
    //     // }
    //     ll siz = v.size();
    //     if (siz==1){
    //         cout<<max((a+b)*n, a*n+b)<<endl;
    //     }
    //     else if (siz==2){
    //         cout<<2*(a+b)<<endl;
    //     }
    //     else{
    //     cout<<(n*a)+((siz*2)/3 + (siz%3))*b<<endl;}
    //     // cout<<n*a<<" "<<((siz*2)/3 + (siz%3))<<endl;
    //     // cout<<siz<<endl;
    // }
    ll n,a,b,count=0;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    for (int i=1;i<n;i++){
        if (s[i]!=s[i-1])count++;
    }
    if (b>0)cout<<(a+b)*n<<endl;
    else{
        if (count%2==0){
            cout<<n*a + (count/2+1)*b<<endl;
        }
        else{
            cout<<n*a + b*((count+3)/2)<<endl;
        }
    }

}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}