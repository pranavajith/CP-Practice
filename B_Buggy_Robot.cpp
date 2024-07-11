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
    int n, l = 0, r = 0, d = 0, u = 0, num = 0;
    cin>>n;
    char arr[101];
    cin>>arr;
    for(int i = 0; i < n; i++){
        if(arr[i] == 'L'){
            l++;            
        }                            
        if(arr[i] == 'R'){
            r++;         
        }                   
        if(arr[i] == 'D'){
            d++;
        }
        if(arr[i] == 'U'){
            u++;
        }
    }
    if(l < r){
        num = num + (2 * l);
    }
    else{
        num = num + (2 * r);
    }
    if(d < u){
        num = num + (2 * d);
    }
    else{
        num = num + (2 * u);
    }
    cout<<num<<endl;
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