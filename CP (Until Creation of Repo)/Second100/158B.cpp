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

void solve(){
    ll n, num=0,count1=0, count2=0, count3=0;
    cin>>n;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==4)num++;
        else if (a==3)count3++;
        else if (a==1)count1++;
        else count2++;
    }
    // cout<<count1<<" "<<count2<<" "<<count34<<"\n";
    if (count1>count3){
        num+=count3;
        count1-=count3;
        count3=0;
    }
    else{
        num+=count3;
        count1=0;
        count3=0;
    }
    // cout<<num<<" "<<count1<<" "<<count3"\n";
    num+=count2/2;
    if (count2%2==1){
        count2=1;
        num++;
        count1-=2;
        if (count1>0){
            num+=count1/4;
            count1=count1%4;
            if (count1>0)num++;
        }
    }
    else{
        num+=count1/4;
        count1=count1%4;
        if (count1>0)num++;
    }
    cout<<num<<"\n";

}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}