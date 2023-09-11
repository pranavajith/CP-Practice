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

int solve(){
    int n,k;
    cin>>n>>k;
    if (k/2>=n || k==1 || (n==2 && k!=3)){
            return (n*(n+1))/2;
        }
        else{
            int half = k/2; 
            int sum_half = half*(half+1)/2; 
            // cout<<sum_half<<"\n";
            int sum_n1 = k*(k-1)/2; 
            // cout<<sum_n1<<"\n";
            int nhalf;
            if ((n>k/2 && n<k) || half==1){
                nhalf = n+half;
            }
            else{
                nhalf = n+half-1;
            }
            // cout<<nhalf<<"\n";
            int sum_nhalf = nhalf*(nhalf+1)/2; 
            // cout<<sum_nhalf<<"\n";
            return sum_nhalf - sum_n1 + sum_half;
        }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        int a = solve();
        cout<<a<<"\n";
    // }
    return 0;
}