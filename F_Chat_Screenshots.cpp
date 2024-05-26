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
    ll n,k;
    cin>>n>>k;
    ll indofPrev = 0, indofOther = 0;
    bool check = false;
    vector <ll> fin(n, -1);
    vector <ll> fin2;
    ll prev = 0, prev1 = 0;
    for (int i=0; i<k; i++) {
        vector <ll> temp(n); for (int j=0; j<n; j++) cin>>temp[j];
        if (i==0){
            for (int j=1; j<n; j++) fin[j-1] = temp[j];
            prev = temp[0];
        }
        else if (i==1){
            prev1 = temp[0];
            if (temp[1] == prev){
                if (fin[1] == temp[0]) check = true;
                ll finallol = n-2;
                while (finallol >= 0) {
                    fin[finallol+1] = fin[finallol];
                    finallol--;
                }
                fin[0] = prev;
                ll iter = n-1;
                // for (auto d:temp) cout<<d<<" "; cout<<"\n";
                // for (auto d:fin) cout<<d<<" "; cout<<"\n";
                for (int j=n-1; j>0; j--){
                    // cout<<j<<" "<<iter<<" !\n";
                    if (fin[iter] == temp[0]) {
                        j++;
                        iter--; continue;
                    }
                    if (temp[j] != fin[iter]) {
                        cout<<"NO\n";
                        return;
                    }
                    iter--;
                }
                if (check) {
                    fin2 = fin;
                    // ll indofPrev = 0, indofOther = 0;
                    for (int j=0; j<n; j++) {
                        if (fin[j] == prev) {
                            indofPrev = j; break;
                        }
                    }
                    if (indofPrev != 0 && fin[indofPrev-1] == prev1) indofOther = indofPrev-1;
                    else indofOther = indofPrev+1;
                    swap(fin2[indofPrev], fin2[indofOther]);
                    // cout<<indofOther<<" "<<indofPrev<<"\n";
                }
            }
            else {
                ll curiter = 0;
                for (int j=1; j<n; j++){
                    if (fin[curiter] == temp[0]){
                        if (temp[j] == prev) check = true;
                        curiter++;
                        j--;
                        continue;
                    }
                    if (temp[j] == prev){
                        if (fin[curiter] == temp[0]) check = true;
                        ll a = n-2;
                        while (a>=j-1){
                            fin[a+1] = fin[a];
                            a--;
                        }
                        fin[curiter] = prev;
                        curiter++;
                    }
                    else {
                        if (fin[curiter] != temp[j]) {
                            // for (auto d:fin) cout<<d<<" "; cout<<"\n";
                            // for (auto d:temp) cout<<d<<" "; cout<<"\n";
                            cout<<"NO\n";
                            // cout<<curiter<<" ";
                            return;
                        }
                        curiter++;
                    }
                }
                if (check) {
                    fin2 = fin;
                    
                    for (int j=0; j<n; j++) {
                        if (fin[j] == prev) {
                            indofPrev = j; break;
                        }
                    }
                    if (indofPrev != 0 && fin[indofPrev-1] == prev1) indofOther = indofPrev-1;
                    else indofOther = indofPrev+1;
                    swap(fin2[indofPrev], fin2[indofOther]);
                    // cout<<indofOther<<" "<<indofPrev<<"\n";
                    // for (auto d:fin) cout<<d<<" ";
                }
            }
        }
        else {
            // cout<<"fin "; for (auto d:fin) cout<<d<<" "; cout<<"\n";
            // cout<<"fin2 "; for (auto d:fin2) cout<<d<<" "; cout<<"\n";
            // if (i==2) for (auto d:fin) cout<<d<<" ";
            if (i==2 && check){
                ll ch = 0;
                for (int j=0; j<n; j++) {
                    // if (fin[]) 
                    if (temp[j] == prev) {
                        ch = j; break;
                    }
                }
                // cout<<prev1<<" ! ";
                // cout<<indofOther<<" "<<indofPrev<<" ! "<<ch<<" !! ";
                if ((ch == n-1 || temp[ch+1] == prev1) && indofOther == indofPrev - 1) fin = fin2;
                // else if (ch == )
            }
            // cout<<"fin "; for (auto d:fin) cout<<d<<" "; cout<<"\n";
            ll curiter = 0;
            for (int j=1; j<n; j++) {
                if (fin[curiter] == temp[0]) {
                    curiter++; j--; continue;
                }
                if (fin[curiter] != temp[j]){
                    cout<<"NO\n";
                    // cout<<j<<" ";
                    return;
                }
                curiter++;
            }
        }
    }
    cout<<"YES\n";
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