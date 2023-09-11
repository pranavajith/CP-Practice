#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    // vector < vector <ll> > v;
    // ll max_hap = 0;
    // for (int i=0;i<5;i++){
    //     vector <ll> v1;
    //     for (int j=0;j<5;j++){
    //         ll a;
    //         cin>>a;
    //         v1.push_back(a);
    //     }
    //     v.push_back(v1);
    // }
    // ll sum_tot = v[0][1]+v[1][0];
    // ll i1=0;
    // ll j1=1;
    // for (int i=0;i<5;i++){
    //     for (int j=0;i<5;j++){
    //         if (v[i][j]+v[j][i]>sum_tot){
    //             sum_tot=v[i][j]+v[j][i];
    //             i1=i;
    //             j1=j;
    //         }
    //     }
    // }
    // int N = int(1e5);
    // int new_list[N][N];
    // for (int i=0;i<5;i++){
    //     for (int j=0;j<5;j++){
    //         new_list[i][j]=v[i][j]+v[j][i];
    //     }
    // }

    // vector <ll> v2;
    // v2.push_back(v[0][1]+v[1][0]);
    // v2.push_back(v[0][2]+v[2][0]);
    // v2.push_back(v[0][3]+v[3][0]);
    // v2.push_back(v[0][4]+v[4][0]);
    // v2.push_back(v[1][2]+v[2][1]);
    // v2.push_back(v[1][3]+v[3][1]);
    // v2.push_back(v[1][4]+v[4][1]);
    // v2.push_back(v[2][3]+v[3][2]);
    // v2.push_back(v[2][4]+v[4][2]);
    // v2.push_back(v[3][4]+v[4][3]);
    // sort (v2.begin(),v2.end(),greater<ll>());
    // cout<<2*(v2[0]+v2[1])+v2[2]+v2[3]<<endl;

    int N[5][5];

    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin>>N[i][j];
        }
    }
    int p[5], ans=-1, tmp;
    for (int i=0;i<5;i++){
        p[i]=i;
    }
    do{
        //01234
        tmp = N[p[0]][p[1]]+N[p[1]][p[0]]+N[p[2]][p[3]]+N[p[3]][p[2]];
        //1234
        tmp+= N[p[1]][p[2]]+N[p[2]][p[1]]+N[p[3]][p[4]]+N[p[4]][p[3]];
        //234
        tmp+=N[p[2]][p[3]]+N[p[3]][p[2]];
        //34
        tmp+=N[p[3]][p[4]]+N[p[4]][p[3]];
        if (tmp>ans){
            ans=tmp;
        }
    }
    while(next_permutation(p,p+5));
    cout<<ans<<endl;
}

int main() 
{

        solve();
    
    return 0;
}