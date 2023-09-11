#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool sort_v(vector <ll> a, vector <ll> b){
    return a[0]>b[0];
}

void solve(){
    ll n,m, count1=0;
    cin>>n>>m;
    vector <ll> row(n);
    vector <ll> column(m);
    for (int i=0;i<n;i++)row[i]=i;
    for (int i=0;i<m;i++)column[i]=i;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            ll a;
            cin>>a;
            if (a==1){
                row[i]=-1;
                column[j]=-1;
            }
        }
    }
    if ((n-count(row.begin(),row.end(),-1)<(m-count(column.begin(),column.end(),-1)))){
        count1=n-count(row.begin(),row.end(),-1);
    }
    else{
        count1=(m-count(column.begin(),column.end(),-1));
    }
    // int ar[n][m];
    // cout<<ar[0][1];
    // vector < vector <ll> > v;
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //         ll a;
    //         cin>>a;
    //         if (a==0){
    //             vector <ll> temp;
    //             temp.push_back(i);
    //             temp.push_back(j);
    //             v.push_back(temp);
    //         }
    //     }
    // }
    // ll count1=0;
    // sort(v.begin(),v.end(),sort_v);
    // while (v[0][0]!=-1){
    //     ll a = v[0][0], b = v[0][1];
    //     for (int i=0;i<v.size();i++){
    //         if (v[i][0]==a || v[i][1]==b){
    //             v[i][0]=-1;
    //         }
    //     }
    //     count1++;
    //     sort(v.begin(),v.end(),sort_v);
    // }
    // cout<<count1<<"\n";
    if (count1%2==0){
        cout<<"Vivek\n";
    }
    else{
        cout<<"Ashish\n";
    }
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