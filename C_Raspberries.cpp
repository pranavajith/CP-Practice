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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, k;
    cin>>n>>k;
    vector <ll> v(n);
    ll count2 = 0, count3 = 0, count5 = 0;
    bool check3 = false, check4 = false, check5a = false, check5b = false, check5c = false, check5d = false;
    for (int i=0; i<n; i++){
        cin>>v[i];
        if (v[i]%3==2)check3=true;
        if (v[i]%4==3)check4=true;
        if (v[i]%5==4)check5a=true;
        if (v[i]%5==3)check5b=true;
        if (v[i]%5==2)check5c=true;
        if (v[i]%5==1)check5d=true;

        while (v[i]%2==0){
            count2++;
            v[i]/=2;
        }
        while (v[i]%3==0){
            count3++;
            v[i]/=3;
        }
        if (v[i]%5==0){
            count5++;
            v[i]/=5;
        }
    }
    if (k==2){
        if (count2>0)cout<<0<<"\n";
        else cout<<1<<"\n";
    }
    else if (k==3){
        if (count3)cout<<0<<"\n";
        else if (check3)cout<<1<<"\n";
        else cout<<2<<"\n";
    }
    else if (k==4){
        if (count2>1)cout<<0<<"\n";
        else if (count2==1 || check4)cout<<1<<"\n";
        else cout<<2<<"\n";
    }
    else if (k==5){
        if (count5)cout<<0<<"\n";
        else if (check5a)cout<<1<<"\n";
        else if (check5b)cout<<2<<"\n";
        else if (check5c)cout<<3<<"\n";
        else if (check5d)cout<<4<<"\n";
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