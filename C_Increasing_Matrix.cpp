#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,m;
    cin>>n>>m;
    vector < vector <ll> > v;
    for (ll i=0;i<n;i++){
        vector <ll> temp;
        for (ll j=0; j<m; j++){
            ll a;
            cin>>a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }
    
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<m;j++){
    //         if (v[i][j]==0)v[i][j]=8001;
    //     }
    // }
    // for (int i=1;i<n-1;i++){
    //     for (int j=1;j<m-1;j++){
    //         if (v[i][j]==8001){
    //             v[i][j]=min(v[i+1][j],v[i][j+1])-1;
    //             cout<<i<<" "<<j<<" "<<v[i][j]<<"\n";
    //             if (v[i][j] <= max(v[i-1][j], v[i][j-1])){
    //                 cout<<-1<<"\n";
    //                 return;
    //             }
    //         }
    //     }
    // }
    for (int i=n-2;i>0;i--){
        // cout<<i<<"\n";
        for (int j=m-2;j>0;j--){
            if (v[i][j]==0){
                
                v[i][j]=min(v[i+1][j],v[i][j+1])-1;
                // cout<<i<<" "<<j<<" "<<v[i][j]<<"\n";
                if (v[i][j]<=max(v[i-1][j], v[i][j-1])){
                    cout<<-1<<"\n";
                    return;
                }
                // cout<<"hi\n";
            }
        }
        // cout<<i<<"\n";
    }
    // cout<<"hi";
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<m;j++){
    //         if (v[i][j]==8001){
    //             cout<<i<<" "<<j<<"\n";
    //             //Checking Edge cases
    //             if (i==0){
    //                 if (j==0){
    //                     v[i][j]=min(v[1][0], v[0][1])-1;
    //                     if (v[i][j]<=0){
    //                         cout<<-1<<"\n";
    //                         return;
    //                     }
    //                 }
    //                 else if (j==m-1){
    //                     v[i][j]=v[i][j-1]+1;
    //                     if (v[i][j]>=v[i+1][j]){
    //                         cout<<-1<<"\n";
    //                         return;
    //                     }
    //                 }
    //                 else{
    //                     v[i][j]=v[i][j-1]+1;
    //                     if (v[i][j]>=v[i+1][j] || v[i][j]>=v[i][j+1]){
    //                         cout<<-1<<"\n";
    //                         return;
    //                     }
    //                 }
    //             }
    //             else if (j==0){
    //                 if (i==n-1){
    //                     v[i][j]=v[i-1][j]+1;
    //                     if (v[i][j] >= v[i][j+1]){
    //                         cout<<-1<<"\n";
    //                         return;
    //                     }
    //                 }
    //                 else{
    //                     v[i][j]=v[i-1][j]+1;
    //                     if (v[i][j] >= v[i][j+1] || v[i][j]>=v[i+1][j]){
    //                         cout<<-1<<"\n";
    //                         return;
    //                     }
    //                 }
    //             }
    //             else if (i==n-1){
    //                 if (j==m-1){
    //                     v[i][j]=max(v[i-1][j], v[i][j-1])+1;
    //                 }
    //                 else{
    //                     v[i][j]=max(v[i-1][j], v[i][j-1])+1;
    //                     if (v[i][j]>=v[i][j+1]){
    //                         cout<<-1<<"\n";
    //                         return;
    //                     }
    //                 }
    //             }
    //             else if (j==m-1){
    //                 v[i][j]=max(v[i-1][j], v[i][j-1])+1;
    //                 if (v[i][j]>=v[i+1][j]){
    //                     cout<<-1<<"\n";
    //                     return;
    //                 }
    //             }
    //             else{
    //                 v[i][j]=max(v[i-1][j], v[i][j-1])+1;
    //                 if (v[i][j]>= v[i+1][j] || v[i][j]>=v[i][j+1]){
    //                     cout<<-1<< i<<" "<<j <<"\n";
    //                     return;
    //                 }
    //             }
    //             cout<<i<<" "<<j<<"\n";
    //         }
    //     }
    // }


    for (ll i=0;i<n;i++){
        vector <ll> temp = v[i];
        sort(temp.begin(), temp.end());
        if (temp!=v[i]){
            cout<<-1<<"\n";
            return;
        }
        set <ll> s(temp.begin(), temp.end());
        if (s.size()!=temp.size()){
            cout<<-1<<"\n";
            return;
        }
    }
    // for (ll i=0;i<m;i++){
    //     for (ll j=1;i<n;i++){
    //         if (v[j-1][i]>v[j][i]){
    //             cout<<-1<<"\n";
    //             return;
    //         }
    //     }
    // }
    vector < vector <ll> > v2;
    for (int i=0;i<m;i++){
        vector <ll> temp;
        for (int j=0;j<n;j++){
            temp.push_back(v[j][i]);
        }
        v2.push_back(temp);
    }

    for (ll i=0;i<m;i++){
        vector <ll> temp = v2[i];
        sort(temp.begin(), temp.end());
        if (temp!=v2[i]){
            cout<<-1<<"\n";
            return;
        }
        set <ll> s(temp.begin(), temp.end());
        if (s.size()!=temp.size()){
            cout<<-1<<"\n";
            return;
        }
    }

    // for (int i=0;i<n;i++){
    //     for (int j=0;j<m;j++){
    //         if (i==0){
    //             if (j==0){
    //                 if (v[i][j]>=min(v[i+1][j], v[i][j+1])){
    //                     cout<<-1<<"\n";
    //                     return;
    //                 }
    //             }
    //             else if (j==m-1){
    //                 if (v[i][j]>=v[i+1][j] || v[i][j]<=v[i-1][j]){
    //                     cout<<-1<<"\n";
    //                     return;
    //                 }
    //             }
    //             else{
    //                 if (v[i][j]<=v[i-1][j] || v[i][j]>=min(v[i+1][j], v[i][j+1])){
    //                     cout<<-1<<"\n";
    //                     return;
    //                 }
    //             }
    //         }
    //         else if (j==0){
    //             if (i==n-1){
    //                 if (v[i][j]<=v[i-1][j] || v[i][j]>=v[i+1][j]){
    //                     cout<<-1<<"\n";
    //                     return;
    //                 }
    //             }
    //             else{
    //                 if (v[i][j] >= min(v[i+1][j], v[i][j+1]) || v[i][j]<=v[i-1][j]){
    //                     cout<<-1<<"\n";
    //                     return;
    //                 }
    //             }
    //         }
    //         else if (i==n-1){
    //             if (j==m-1){
    //                 if (v[i][j]<=max(v[i-1][j], v[i][j-1])){
    //                     cout<<-1<<"\n";
    //                     return;
    //                 }
    //             }
    //             else{
    //                 if (v[i][j]<=max(v[i-1][j], v[i][j-1]) || v[i][j]>=v[i][j+1]){
    //                     cout<<-1<<"\n";
    //                     return;
    //                 }
    //             }
    //         }
    //         else if (j==m-1){
    //             if (v[i][j]<=max(v[i-1][j], v[i][j-1]) || v[i][j]>=v[i+1][j]){
    //                 cout<<-1<<"\n";
    //                 return;
    //             }
    //         }
    //         else{
    //             if (v[i][j]<=max(v[i-1][j], v[i][j-1]) || v[i][j]>=max(v[i+1][j], v[i][j+1])){
    //                 cout<<-1<<"\n";
    //                 return;
    //             }
    //         }
    //     }
    // }
    ll sum1=0;
    for (ll i=0;i<n;i++){
        for (ll j=0;j<m;j++){
            sum1+=v[i][j];
        }
    }
    cout<<sum1<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}