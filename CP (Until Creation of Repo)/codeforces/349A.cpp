#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll count_25 = 0, count_50 = 0, lol=0;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        if ((a==25) || (a==50 && count_25) || (a==100 && (count_25>=3 || (count_25 && count_50)))){
            lol++;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
        if (a==25){
            count_25++;
            // cout<<count_25<<endl;
        }
        else if (a==50){
            count_25--;
            count_50++;
            // cout<<count_25<<" ";
            // cout<<count_50<<endl;
        }
        else if (a==100 && (count_25>=3) && count_50==0){
            count_25-=3;
            // cout<<count_25<<endl;
        }
        else if (a==100 && (count_25 && count_50)){
            count_25--;
            count_50--;
            // cout<<count_25<<" "; 
            // cout<<count_50<<endl; 
        }
    }
    if (lol==n){
        cout<<"YES"<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}