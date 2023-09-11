#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    vector <int> v;

    for (int i=0;i<s.size();i++){
        if (s[i]!='+'){
            v.push_back(int(s[i]));
        }
    }

    sort(v.begin(),v.end());

    for (int i=0;i<v.size();i++){

        s[2*(i+1)-2]=v[i];
    }
    cout<<s;
}

int main() 
{

        solve();
    
    return 0;
}