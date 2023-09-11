#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    unordered_map <char,ll> m;
    for (char d:s){
        m[d]++;
    }
    vector <ll> v;
    ll count1 = 0;
    // auto it2=m.begin();
    for (auto it = m.begin();it!=m.end();it++){
        if ((it->second%2)){
            // v.push_back(it->second);
            count1++;
        }
    }
    if (count1==0){
        cout<<"First"<<endl;
    }
    else if ((count1-1)%2==0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }


}

int main() 
{

        solve();
    
    return 0;
}