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
    vector <ll> v(3);
    for (int i=0; i<3; i++) cin>>v[i];
    sort(v.begin(), v.end());
    if (v[0] == 0){
        cout<<v[1]/3 + v[2]/3<<"\n";
        return;
    }
    if (v[2] < 3){
        cout<<v[0]<<"\n";
        return;
    }
    ll ans = v[2]/3;
    v[2]%=3;
    bool secondbigger = false, firstbigger = false;
    if (v[1] > 2)secondbigger = true;
    if (v[0] > 2)firstbigger = true;
    if (!secondbigger && !firstbigger){
        ans--; v[2]+=3;
        ans+=v[0]; v[2]-=v[0]; ans+=v[2]/3;
        cout<<ans<<"\n";
        return;
    }
    else if (!firstbigger){
        ans+=v[1]/3;
        if (v[0] == 0){
            cout<<ans<<"\n";
            return;
        }
        else if (v[0] == 1){
            if (v[1] && v[2]){
                ans++;
            }
            cout<<ans<<"\n";
            return;
        }
        else{
            if (v[1]==0){
                if (v[2]==2)ans++;
                cout<<ans<<"\n";
                return;
            }
            if (v[2]==0){
                if (v[1]==2)ans++;
                cout<<ans<<"\n";
                return;
            }
            if (v[1]==2 && v[2]==2){
                ans+=2;
                cout<<ans<<"\n";
                return;
            }
            ans++;
            cout<<ans<<"\n";
            return;
        }
    }
    else{
        ans+=v[1]/3; v[1]%=3;
        ans+=v[0]/3; v[0]%=3;
        sort(v.begin(), v.end());
        if (v[0]==0 && v[1]==2 && v[2]==2)ans++;
        else if (v[0]==1 && v[1]==1 && v[2]==1)ans++;
        else if (v[0]==2 && v[1]==2 && v[2]==2)ans+=2;
        else if (v[0]==1 && v[1]==2 && v[2]==2)ans++;
        else if (v[0]==1 && v[1]==1 && v[2]==2)ans++;
        cout<<ans<<"\n";
        return;

    }
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