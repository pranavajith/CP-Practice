#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void swap(string& s, ll i, ll j){
    ll temp;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    if (s1.size()!=s2.size()){
        cout<<"NO"<<endl;
    }
    else {
        // ll count1=0;
        // for (ll i=0;i<s1.size()-1;i++){
        //     for (ll j=i+1;j<s1.size();j++){
        //         swap(s1,i,j);
        //         if (s1==s2){
        //             count1++;
        //         }
        //         swap(s1,i,j);
        //     }
        // }
        // if (count1==0){
        //     cout<<"NO"<<endl; 
        // }
        // else{
        //     cout<<"YES"<<endl;
        // }
        ll count1=0;
        for (int i=0;i<s1.size();i++){
            if (s2[i]==s1[i]){
                count1++;
            }
        }
        set <char> set1;
        set <char> set2;

        for (char d:s1){
            set1.insert(d);
        }
        for (char d:s2){
            set2.insert(d);
        }
        if (set1!=set2){
            cout<<"NO"<<endl;
        }
        else{
        if (count1==s1.size()-2){
            if (s1.size()==2 && (s1[0]!=s2[1] || s1[1]!=s2[0])){
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    }
}

int main() 
{

        solve();
    
    return 0;
}