#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

bool sort_life(vector <ll> a, vector <ll> b){
    return a[3]<b[3];
}

void solve(){
    ll n;
    cin>>n;
    vector <vector <ll> > v5;
    vector <vector <ll> > v;
    for (int i=0;i<n;i++){
        vector <ll> v1(4);
        for (int i=0;i<4;i++){
            cin>>v1[i];
        }
        v.push_back(v1);
        v5.push_back(v1);
        // cout<<v.size()<<endl;
    }
    if (v.size()==1){
        cout<<1<<endl;
    }
    else{
    sort(v.begin(),v.end(),sort_life);
    // cout<<v[0][2]<<endl;
    ll lol=0,count1=0;
    for (int i=0;i<n;i++){
        ll count2=0;
        for (int j=0;j<n;j++){
            // cout<<"lol"<<endl;
            if(i!=j){
            if (v[j][0]>v[i][0] && v[j][1]>v[i][1] && v[j][2]>v[i][2]){
                break;
            }
            count2++;
            if (count1==0 && count2==n-1){
                count1++;
                // cout<<v[i][3];
                lol = v[i][3];
            }
            
        }
        }
    }
    for (int i=0;i<n;i++){
        if (v5[i][3]==lol){
            cout<<i+1<<endl;
        }
        // cout<<v5[i][3]<<endl;
        // cout<<lol<<endl;
    }
}
}

int main() 
{

        solve();
    
    return 0;
}