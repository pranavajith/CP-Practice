#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll a,b,count1=INT_MAX;
    cin>>a>>b;
    
    for (int i=0;i<=30;i++){
        ll temp=0, fake_a = a, fake_b = b;
        if (fake_b==1){
            fake_b=2;
            temp++;
        }
        fake_b+=i;
        temp+=i;
        while (fake_a>0){
            fake_a/=fake_b;
            temp++;
        }
        // cout<<temp<<"\n";
        count1=min(count1,temp);
    }
    cout<<count1<<"\n";
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