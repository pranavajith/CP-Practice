#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
ll m,d;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll check_sol(vector <ll> temp){
    ll count1=0, last=0;
    for (int i=0;i<m-1;i++){
        if (i==0 || last%d==0 || count(temp.begin(),temp.end(),i+1)){
            count1++;
        }
    }
    return count1;
}

void solve(){
    ll n, ans2=0;
    cin>>n>>m>>d;
    vector <ll> v(m);
    ll count1=0;
    for (int i=0;i<m;i++)cin>>v[i];
    // for (auto e:v){
    //     cout<<e<<" ";
    // }
    // cout<<endl;

    // First Comment
    // ll a;
    // for (auto e:v){
    //     // cout<<e<<endl;
    //     if ((e%d)!=0 || e<d){
    //         ans2++;
    //         // cout<<e<<" yes"<<endl;
    //         a=e;
    //     }
    // }
    // ll multiple=0;
    // cout<<a<<endl;
    // for (int i=0;i<n;i++){
    //     if ((i==0 || multiple%d==0 || count(v.begin(),v.end(),i+1)) && ((i+1)!=a)){
    //         cout<<i+1<<endl;
    //         count1++;
    //         multiple = 0;
    //     }
    //     multiple++;
    // }
    // if (count1==m){
    //     cout<<count1<<" "<<m<<endl;
    // }
    // else{
    // cout<<count1<<" "<<m-ans2<<endl;
    // }
    // End comment

    vector <ll> check(m);
    for (int j=0;j<m;j++){
        ll e=v[j];
        vector <ll> temp(m-1);
        for (int i=0;i<m;i++){
            if (e!=v[i]){
                temp[i]=v[i];
            }
        }
        check[j]=check_sol(temp);
    }
    
    for (auto e:check){
        cout<<e<<" ";
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