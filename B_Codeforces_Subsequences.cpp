#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    ll a = 1;
    while (pow(a,10)<n){
        // cout<<a<<" ";
        a++;
    }
    // cout<<"There we are!";
    ll i=0;
    // cout<<a<<"\n";
    if (pow(a,10)==n)i=10;
    else{
        ll temp = pow(a-1,10);
        // ll temp2 = pow(a,10);
        // cout<<temp<<" "<<temp2<<"\n";
        while(temp < n){
            temp/=(a-1);
            temp*=a;
            i++;
            // if (i<200)cout<<i<<"\n";
        }
    }

    // while (pow(a,i+1)<=n)i++;

    string s;
    char c[] = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
    ll iter = 0;
    if (n==0){
        cout<<" ";
        return;
    }
    if (n==1){
        cout<<"codeforces\n";
        return;
    }
    if (n==2){
        cout<<"codeforcess\n";
        return;
    }
    // cout<<a<<" "<<i<<"\n";
    while (iter < 10){
        if (i>0){
            i--;
            // ll w = a;
            string s1(a, c[iter]);
            // while (w--){
            //     s.push_back(c[iter]);
            // }
            s.append(s1);
            iter++;
        }
        else{
            // ll w = a-1;
            string s1(a-1, c[iter]);
            // while (w--){
            //     s.push_back(c[iter]);
            // }
            s.append(s1);
            iter++;
        }
    }
    cout<<s<<"\n";

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