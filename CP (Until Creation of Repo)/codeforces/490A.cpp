#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long


void disp(vector<ll> v){
    cout<<endl;
    for (auto d: v){
        cout<<d<<" ";
    }
    cout<<endl;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    ll a,b,c;
    a = count(v.begin(),v.end(),1);
    b = count(v.begin(),v.end(),2);
    c = count(v.begin(),v.end(),3);

    ll minim, non1, non2, real;
    minim = min(min(a,b),c);
    if (a<b & a<c){
        non1 = 2;
        non2 = 3;
        real = 1;
    }
    else if (b<a & b<c){
        non1 = 1;
        non2 = 3;
        real = 2;
    }
    else{
        non1 = 1;
        non2 = 2;
        real = 3;
    }

    cout<<minim<<endl;
    
    // disp(v);

    if (minim!=0){

        while(minim--){
            auto it1 = find(v.begin(),v.end(),real);
            auto it2 = find(v.begin(),v.end(),non1);
            auto it3 = find(v.begin(),v.end(),non2);
            ll first = it1-v.begin();
            ll second = it2-v.begin();
            ll third = it3-v.begin();
            cout<<first+1<<" "<<second+1<<" "<<third+1<<endl;
            // v.erase(find(v.begin(),v.end(),real));
            // v.erase(find(v.begin(),v.end(),non2));
            // v.erase(find(v.begin(),v.end(),non1));
            v[it1-v.begin()]=0;
            v[it2-v.begin()]=0;
            v[it3-v.begin()]=0;
            // disp(v);

    }
    }
}

int main() 
{

        solve();
    
    return 0;
}