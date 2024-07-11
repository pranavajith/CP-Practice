#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    int n;
        cin>>n;
        vector<vector<int> > v(n);
       
        for(int i =0; i<n; i++){
             
             for(int j = 0; j<5; j++){
                int ele;
                cin>>ele;
                v[i].push_back(ele);
               
             }
        }
         bool flag = false;
        for(int i = 0; i<5; i++){
            for(int j = 0; j<5; j++){
                   if(i!=j){
 
                int cnt1 =0;
                int cnt2 =0;
                int cnt = 0;
                
                for(int k =0; k<n; k++){
                    if(v[k][i]==1 &&!v[k][j]){
                        cnt1++;
                    }
                    if(v[k][j]==1 &&!v[k][i]){
                        cnt2++;
                    }
                    if(v[k][i] && v[k][j]){
                        cnt++;
                    }
 
                    if(cnt1>n/2||cnt2>n/2){
                        continue;
 
                    }
                    if(cnt1+cnt2+cnt==n){
                        flag = true;
                    }
 
                       }
                   }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}