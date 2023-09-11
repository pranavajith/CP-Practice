#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    string s;
    ll n;
    cin>>n>>s;
    set <char> st1;
    for (auto d:s){
        st1.insert(d);
    }
    vector <ll> v_count;
    for (auto d: st1){
        v_count.push_back(count(s.begin(),s.end(),d));
    }
    ll c=0;
    for (int i=0;i<v_count.size();i++){
        if (v_count[i]%n!=0){
            c++;
            break;
        }
    }
    if (c==1){
        cout<<-1<<endl;
    }
    else{
        for (int i=0;i<v_count.size();i++){
            v_count[i]=v_count[i]/n;
        }

        string s1 = "";
        for(int i=0;i<v_count.size();i++){
            auto it = st1.begin();
            for (int j=0;j<i;j++)it++;
            for (int w=0;w<v_count[i];w++)s1 += *(it);
            // s1 += *(it)*v_count[i];

        }
    for (int i=0;i<n;i++){
        cout<<s1;
    }
    cout<<endl;

    }

}

int main() 
{

        solve();
    
    return 0;
}