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
        ll n; cin>>n;
        ll ans = 0;
        int a[] = {15, 10, 6, 3, 1};
        ll rem = n;
        if (n>20){
            // rem = 20;
            // n-=20;
            // for (auto d:a){
            //     ans += n/d; n%=d;
            // }
            ans += n/15; n %= 15;
            ans--; n += 15;
        }
        if (n == 1) ans++;
        else if (n==2) ans+=2;
        else if (n==3) ans+=1;
        else if (n==4) ans+=2;
        else if (n==5) ans+=3;
        else if (n==6) ans+=1;
        else if (n==7) ans+=2;
        else if (n==8) ans+=3;
        else if (n==9) ans+=2;
        else if (n==10) ans+=1;
        else if (n==11) ans+=2;
        else if (n==12) ans+=2;
        else if (n==13) ans+=2;
        else if (n==14) ans+=3;
        else if (n==15) ans+=1;
        else if (n==16) ans+=2;
        else if (n==17) ans+=3;
        else if (n==18) ans+=2;
        else if (n==19) ans+=3;
        else if (n==20) ans+=2;
        else if (n==21) ans+=2;
        else if (n==22) ans+=3;
        else if (n==23) ans+=3;
        else if (n==24) ans+=3;
        else if (n==25) ans+=2;
        else if (n==26) ans+=3;
        else if (n==27) ans+=3;
        else if (n==28) ans+=3;
        else if (n==29) ans+=4;
        // if (rem == 20) ans += 2;
        // else if (rem == 19) 
        cout<<ans<<"\n";





        // while (n>20){
        //     ll temp = 1e9, cur = -1;
        //     for (auto d:a){
        //         if (d>n) continue;
        //         if (n/d < temp){
        //             temp = n/d; cur = d;
        //         }
        //     }
        //     ans += temp; n %= cur;
        // }
        // cout<<ans<<"\n";
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