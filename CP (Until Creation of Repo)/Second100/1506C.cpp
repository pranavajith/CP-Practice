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
    string s1,s2;
    cin>>s1>>s2;
    ll count_sim = 0;
    for (int i=0;i<s1.size();i++){
        ll temp = 0, a=0;
        for (int j=0;j<s2.size();j++){
            cout<<s2[j]<<" "<<s1[i+temp]<<"\n";
            if (s2[j]==s1[i+temp]){
                // cout<<"Yay!"<<"\n";
                // a++;
                temp++;
                // cout<<temp<<endl;
                // cout<<s2[j]<<" "<<s1[i+temp]<<"\n";
                // cout<<temp<<"\n";
                count_sim = max(count_sim,temp);
            }
            else{
                count_sim = max(count_sim,temp);
                // cout<<count_sim<<"\n";
                // cout<<temp<<"\n";
                temp=0;
            }
        }
    }
    // cout<<count_sim<<"\n";
    cout<<s1.size()+s2.size()-2*count_sim<<"\n";
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