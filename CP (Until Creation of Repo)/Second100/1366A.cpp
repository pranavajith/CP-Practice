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
    ll a, b, num=0;
    cin>>a>>b;
    // while (a>0 && b>0 && a!=b){
    //     if (a>b){
    //         num++;
    //         a-=2;
    //         b-=1;
    //     }
    //     else{
    //         num++;
    //         a-=1;
    //         b-=2;
    //     }
    // }
    if (min(b,a)<=abs(b-a)){
        num+=min(b,a);
        a=0;
    }
    else{
        num+=abs(b-a);
        ll temp=abs(b-a);
        if (a!=b){
            if (a>b){
                a-=2*temp;
                b-=temp;
            }
            else{
                a-=temp;
                b-=2*temp;
            }
        }
    }
    if (a==0 || b==0)cout<<num<<"\n";
    else{
        // ll count1=0;
        // while (a!=0 && b!=0){
        //     num++;
        //     if (count1%2){
        //         a-=2;
        //         b-=1;
        //     }
        //     else{
        //         a-=1;
        //         b-=2;
        //     }
        //     count1++;
        // }
        // if (a==0 || b==0)cout<<
        if (a%3==2)num+=2*(a/3)+1;
        else num+=2*(a/3);
        cout<<num<<"\n";
    }
    // cout<<a<<" "<<b<<endl;
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