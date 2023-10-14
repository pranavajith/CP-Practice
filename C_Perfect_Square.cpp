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
    vector <string > v;
    for (int i=0; i<n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    // ll a = n;
    // while (a!=0){

    //     a-=2;
    // }
    ll iter = 0, n2=n, ans = 0;
    while (iter!=n/2){
        for (int i=0; i<n2-iter-1; i++){
            // cout<<"i: "<<i<<"\n";
            char c1 = v[iter][iter+i];
            char c2 = v[iter+i][n2-1];
            char c3 = v[n2-1][n2-i-1];
            char c4 = v[n2-i-1][iter];
            // cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<"\n";
            char c = max(max(c1,c2),max(c3,c4));
            // cout<<c<<"\n";
            ans+=abs(c-c1)+abs(c-c2)+abs(c-c3)+abs(c-c4);
            // v[iter][iter+i] = c;
            // v[i][n2-1] = c;
            // v[n2-1][n2-i-1]=c;
            // v[n2-i-1][iter]=c;
            // c1 = v[iter][iter+i];
            // c2 = v[i][n2-1];
            // c3 = v[n2-1][n2-i-1];
            // c4 = v[n2-i-1][iter];
            // cout<<"Again!\n";
            // cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<"\n";
        }
        // cout<<"iterDone\n";
        iter++; n2--;
    }
    cout<<ans<<"\n";
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