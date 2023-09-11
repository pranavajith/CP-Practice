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
    ll m,sum1=0;
    cin>>m;
    vector < vector <ll> > v_big;
    vector <ll> v;
    for (int i=0;i<m;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        sum1+=a;
    }
    // cout<<endl;
    // for (auto d:v){
    //     cout<<d<<" ";
    // }
    // cout<<endl;
    ll sum2=sum1, sum_left=0;
    ll x,y;
    cin>>x>>y;
    for (int i=0;i<m;i++){
        vector <ll> v1;
        v1.push_back(sum_left);
        v1.push_back(sum2);
        v_big.push_back(v1);
        // cout<<sum_left<<" "<<sum2<<endl;
        sum_left+=v[i];
        sum2-=v[i];
        
    }
    // cout<<sum_left<<" "<<sum2<<endl;
    // cout<<endl<<endl;
    vector <ll> v1;
    v1.push_back(sum_left);
    v1.push_back(sum2);
    v_big.push_back(v1);
    // for (auto d:v_big){
    //     cout<<d[0]<<" "<<d[1]<<endl;
    // }
    // cout<<endl;    
    ll count2=0;
    for (int i=0;i<v_big.size();i++){
        count2++;
        if (v_big[i][0]>=x && v_big[i][1]<=y){
            cout<<i+1<<endl;
            break;
        }
    }
    if (count2==m){
        cout<<0<<endl;
    }
    

    // ll count2=0;
    // for (int i=0;i<m;i++){
    //     vector <ll> d = v_big[i];
    //     if (d[0]>=x && d[1]<=y){
    //         cout<<i<<endl;
    //         break;
    //     }
    //     count2++;
    // }
    // if (count2==m){
    //     cout<<0<<endl;
    // }
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}