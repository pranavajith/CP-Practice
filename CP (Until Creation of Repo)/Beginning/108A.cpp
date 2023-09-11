#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll rev(ll a){
    ll n=0;
    for (int i=0;i<2;i++){
        n=n*10 + a%10;
        a/=10;
    }
    if (floor(log10(n)+1)==2)return n;
    else return n*10;
}

void solve(){
    string s,t;
    cin>>s;
    stringstream ss(s);
    vector <ll> v;
    while (getline(ss,t,':')){
        ll n=0;
        for (int i=0;i<2;i++){
            n=n*10 + (t[i]-'0');
        }
        v.push_back(n);
    }
    // cout<<v[0]<<" "<<v[1]<<endl;
    ll a = v[0],b = v[1];
    ll c;
    if (a==1){
        c=1;
    }
    else{
        c=floor(log10(a)+1);
    }
    // cout<<rev(a)<<endl;
    if (rev(a)>59 && (a)>15){
        cout<<20<<":"<<"02"<<endl;
    }
    else if (rev(a)>59){
        cout<<10<<":"<<"01"<<endl;
    }
    else if (b<rev(a) && c==2){
        // cout<<v[0];
        // cout<<"YES"<<endl;
        cout<<a<<":"<<rev(a)<<endl;
    }
    else if (a==23){
        cout<<"00:00"<<endl;
    }
    else if (c==1){
        // cout<<"YES"<<endl;
        // cout<<"YES";
        if (b>=(10*a))cout<<"0"<<a+1<<":"<<a+1<<"0"<<endl;
        else cout<<"0"<<a<<":"<<a<<"0"<<endl;
    }
    else{
        if (rev(a+1)>59 && (a+1)>15)cout<<20<<":"<<"02"<<endl;
        else if (rev(a+1)>59)cout<<10<<":"<<"01"<<endl;
        else if (a==0)cout<<"01:10"<<endl;
        else cout<<a+1<<":"<<rev(a+1)<<endl;
    }
    
    
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}