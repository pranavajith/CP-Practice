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
    ll n, sum1=0;
    cin>>n;
    vector <ll> v(n+2);
    for (int i=0;i<n+2;i++){
        cin>>v[i];
        sum1+=v[i];
    }
    sort(v.begin(),v.end());
    // cout<<v[v.size()-1];
    sum1-=v[v.size()-1];
    // cout<<endl<<v[v.size()-1]<<endl<<endl;
    ll last = v[v.size()-1];
    vector <ll> v2;
    bool check = false;
    for (int i=0;i<n+1;i++){
        // cout<<"hi"<<endl;
        if (check){
            // cout<<"hi1";
            v2.push_back(v[i]);
        }
        else{
            // cout<<sum1<<" "<<v[i]<<" "<<last<<endl;
            if (sum1-v[i]==last){
                // cout<<"this up"<<endl;
                check = true;
                // cout<<"hi2";
            }
            else{
                v2.push_back(v[i]);
                // cout<<"hi3";
            }
        }
    }
    if (check){
        for  (int i=0;i<n;i++){
            cout<<v2[i]<<" ";
            // cout<<"hi"<<endl;
        }
        cout<<endl;
    }
    else{
        sum1-=v[v.size()-2];
        if (sum1==v[v.size()-2]){
            for (int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            // cout<<"hi1"<<endl;
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
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