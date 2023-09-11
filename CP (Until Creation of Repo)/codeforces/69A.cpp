#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void print_vec(vector < vector<ll> > v){
    cout<<endl;
    cout<<endl;
    for (int i=0;i<v.size();i++){
        for (int j=0;j<3;j++){
            cout<<" "<<v[i][j]<<" ";
        }
    cout<<endl;
    }
}

void print_vec2(vector <ll> v){
    cout<<endl;
    cout<<endl;
    for (int i=0;i<v.size();i++){
        cout<<" "<<v[i]<<" ";
        }
    cout<<endl;
    }


int main() {
    ll n;
    cin>>n;
    vector < vector<ll> > v;
    for (ll i=0;i<n;i++){
        vector <ll> v1;
        for (ll j = 0; j<3;j++){
            ll c;
            cin>>c;
            v1.push_back(c);
        }
        /* print_vec2(v1); */
         v.push_back(v1); 
    } 

    /* print_vec(v); */

    ll x = 0;
    ll y = 0;
    ll z = 0;

    for (ll j=0;j<n;j++){
        x+=v[j][0];
        y+=v[j][1];
        z+=v[j][2];
    }

    if (x==0 & y==0 & z==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}