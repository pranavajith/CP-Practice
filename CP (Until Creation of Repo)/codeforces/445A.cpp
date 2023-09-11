#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

int check(vector < vector <char> > v, int x, int y){
    if ((v[x-1][y]!='W') && (v[x+1][y]!='W') && (v[x][y-1]!='W') && (v[x][y+1]!='W')){
        return 1;
    }
    else{
        return 0;
    }
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector < vector <char> > v;
    for (int i=0;i<n;i++){
        vector <char> v1;
        string s;
        cin>>s;
        for (auto d:s){
            // if (d=='.'){
            //     v1.push_back('.');
            // }
            // else{
            //     v1.push_back('-');
            // }
            v1.push_back(d);
        }
        v.push_back(v1);
    }


    // cout<<endl;
    // for (auto d:v){
    //     for (auto d1:d){
    //         cout<<d1;
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    vector < vector <char> > v_new;
    for (int i=0;i<n+2;i++){
        vector <char> v1_new;
        for (int j=0;j<m+2;j++){
            v1_new.push_back('B');
        }
        v_new.push_back(v1_new);
    }


    // cout<<endl;
    // for (auto d:v_new){
    //     for (auto d1:d){
    //         cout<<d1;
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if ((check(v_new,i+1,j+1)) && (v[i][j]=='.')){
                v_new[i+1][j+1]='W';
            }
            else if (v[i][j]=='-'){
                v_new[i+1][j+1]='-';
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<v_new[i+1][j+1];
        }
        cout<<endl;
    }

}

int main() 
{

        solve();
    
    return 0;
}