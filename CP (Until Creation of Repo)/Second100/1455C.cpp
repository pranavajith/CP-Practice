#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll x,y, x_score = 0, y_score = 0;
    cin>>x>>y;
    // x--;
    // while (true){
    //     if (x>y){
    //         x_score++;
    //         x--;
    //     }
    //     else if (x==y){
    //         y_score+=1;
    //     }
    //     if (x==0){
    //         y_score+=y;
    //     }
    //     if (y==0){
    //         x_score+=x;
    //     }
    //     if (x==0 && y==0)break;
    // }
   cout<<x-1<<" "<<y<<"\n";
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