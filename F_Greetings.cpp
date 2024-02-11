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

ll check(vector <pair <ll,ll> > &forwardmovingP, vector <ll> &forwardmovingF, vector <ll> &forwardmovingS, 
vector <pair <ll,ll> > &backwardmovingP, vector <ll> &backwardmovingF, vector <ll> &backwardmovingS){
    ll ans = 0;
    sort(forwardmovingP.begin(), forwardmovingP.end());
    sort(forwardmovingF.begin(), forwardmovingF.end());
    sort(forwardmovingS.begin(), forwardmovingS.end());     
    // sort(backwardmovingP.begin(), backwardmovingP.end());
    sort(backwardmovingF.begin(), backwardmovingF.end());
    sort(backwardmovingS.begin(), backwardmovingS.end());
    for (int i=0; i<forwardmovingP.size(); i++) {
        forwardmovingS.erase(lower_bound(forwardmovingS.begin(), forwardmovingS.end(), forwardmovingP[i].second));
        ans += upper_bound(forwardmovingS.begin(), forwardmovingS.end(), forwardmovingP[i].second) - forwardmovingS.begin();
        ans += upper_bound(backwardmovingS.begin(), backwardmovingS.end(), forwardmovingP[i].second) - backwardmovingS.begin();
        ans -= lower_bound(backwardmovingF.begin(), backwardmovingF.end(), forwardmovingP[i].first) - backwardmovingF.begin();
    }
    return ans;
}

void solve(){
    ll n,a,b;
    cin>>n;
    vector <pair <ll,ll> > forwardmovingP, backwardmovingP, forwardmovingP1, backwardmovingP1;
    vector <ll> forwardmovingF, forwardmovingS, backwardmovingF, backwardmovingS, forwardmovingF1, forwardmovingS1, backwardmovingF1, backwardmovingS1;
    for (int i=0; i<n; i++) {
        cin>>a>>b;
        if (b>a){
            forwardmovingP.push_back(make_pair(a,b));
            forwardmovingP1.push_back(make_pair(-a,-b));
            forwardmovingF.push_back(a);
            forwardmovingS.push_back(b);
            forwardmovingF1.push_back(-a);
            forwardmovingS1.push_back(-b);
        }
        else {
            backwardmovingP.push_back(make_pair(a,b));
            backwardmovingP1.push_back(make_pair(-a,-b));
            backwardmovingF.push_back(a);
            backwardmovingS.push_back(b);
            backwardmovingF1.push_back(-a);
            backwardmovingS1.push_back(-b);
        }
    }
    ll ans = 0;
    // sort(forwardmovingP.begin(), forwardmovingP.end());
    // sort(forwardmovingF.begin(), forwardmovingF.end());
    // sort(forwardmovingS.begin(), forwardmovingS.end());

    ans += check(forwardmovingP, forwardmovingF, forwardmovingS, backwardmovingP, backwardmovingF, backwardmovingS);
    // for (auto &d : forwardmovingP){d.first *= -1, d.second *= -1;}
    // for (auto &d : forwardmovingS){d *= -1;}
    // for (auto &d : forwardmovingF){d *= -1;}
    // for (auto &d : backwardmovingP){d.first *= -1, d.second *= -1;}
    // for (auto &d : backwardmovingS){d *= -1;}
    // for (auto &d : backwardmovingF){d *= -1;}
    ans += check(backwardmovingP1, backwardmovingF1, backwardmovingS1, forwardmovingP1, forwardmovingF1, forwardmovingS1);
    cout<<ans<<"\n";
    // // for (auto d:forwardmovingP){
    // //     cout<<d.first<<" "<<d.second<<", ";
    // // } cout<<"\n";
    // // for (auto d:forwardmovingS) cout<<d<<" "; cout<<"\n";
    // for (int i=0; i<forwardmovingP.size(); i++) {
    //     forwardmovingS.erase(lower_bound(forwardmovingS.begin(), forwardmovingS.end(), forwardmovingP[i].second));
    //     ans += upper_bound(forwardmovingS.begin(), forwardmovingS.end(), forwardmovingP[i].second) - forwardmovingS.begin();
    //     // for (auto d:forwardmovingS) cout<<d<<" "; cout<<"\n";
    //     // cout<<ans<<"\n";
    // }
    // // cout<<ans<<"\n";
    

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