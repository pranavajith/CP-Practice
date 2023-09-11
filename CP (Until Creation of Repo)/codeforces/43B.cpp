#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    int count2 = 0;
    for (char d:s2){
        int count1=0;
        // cout<<d<<endl;
        for (int i=0;i<s1.size();i++){
            if (d==s1[i]){
                // cout<<"Lol: "<<s2[i]<<endl;
                count1++;
                s1[i]=' ';
                break;
            }
        }
        // cout<<"Count1: "<<count1<<endl;
        if (count1==0){
            count2++;
            cout<<"NO"<<endl;
            break;
        }
    }
    if (count2==0){
        cout<< "YES"<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}