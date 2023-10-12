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
    ll n,m;
    cin>>n>>m;
    vector <ll> vk(n);
    for (int i=0; i<n; i++)cin>>vk[i];
    sort(vk.begin(), vk.end());
    while (m--){
        ll a,b,c;
        cin>>a>>b>>c;
        int l = 0, r = n-1;
        bool check = false;
        while (l<=r){
            ll mid = (l+r)/2;
            if ((b-vk[mid])*(b-vk[mid]) - 4*a*c < 0){
                cout<<"YES\n";
                cout<<vk[mid]<<"\n";
                check = true;
                break;
            }
            if (vk[mid] > b)r=mid-1;
            else l =mid+1;
        }
        if(!check)cout<<"NO\n";
        // bool check = false;
        // for (int i=0; i<n;i++){
        //     if ((b-vk[i])*(b-vk[i]) - 4*a*c < 0){
        //         cout<<"YES\n"<<vk[i]<<"\n";
        //         check = true;
        //         break;
        //     }
        // }
        // if (!check)cout<<"NO\n";


        // if (c >= 0){
        //     cout<<"NO\n";
        //     continue;
        // }

        // double lol1 = b - 2*sqrt(a*c);
        // double lol2 = b + 2*sqrt(a*c);
        // if (kmin < lol2)cout<<"YES\n"<<kmin<<"\n";
        // else if (kmax > lol1)cout<<"YES\n"<<kmax<<"\n";
        // else cout<<"NO\n";


        // if ((b-kmin)*(b-kmin) - 4*a*c < 0){
        //     cout<<"YES\n"<<kmin<<"\n";
        // }
        // else if ((b-kmax)*(b-kmax) - 4*a*c < 0){
        //     cout<<"YES\n"<<kmax<<"\n";
        // }
        // else cout<<"NO\n";
    }
    cout<<"\n";
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