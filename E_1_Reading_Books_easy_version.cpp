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
    ll n, k, leftcount = 0, rightcount = 0;
    cin>>n>>k;
    vector <ll> alice, bob, both;
    for (int i=0; i<n; i++){
        ll a,b,c;
        cin>>a>>b>>c;
        if (b==1 && c==1) both.push_back(a);
        else if (b==1) alice.push_back(a);
        else if (c==1) bob.push_back(a);
        leftcount+=b; rightcount+=c;
    }
    if (leftcount < k || rightcount < k){
        cout<<-1<<"\n";
        return;
    }
    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());
    sort(both.begin(), both.end());
    ll alicecount = 0, bobcount = 0, aliceiter = 0, bobiter = 0, bothiter = 0, totaltime = 0;
    while (alicecount < k || bobcount < k){
        if (alicecount == k){
            bobcount++;
            if (bobiter == bob.size()){
                totaltime+=both[bothiter];
                bothiter++;
            }
            else if (bothiter == both.size()){
                totaltime+=bob[bobiter];
                bobiter++;
            }
            else{
                if (bob[bobiter] < both[bothiter]){
                    totaltime += bob[bobiter];
                    bobiter++;
                }
                else{
                    totaltime+=both[bothiter];
                    bothiter++;
                }
            }
        }
        else if (bobcount == k){
            alicecount++;
            if (alicecount == alice.size()){
                totaltime+=both[bothiter];
                bothiter++;
            }
            else if (bothiter == both.size()){
                totaltime+=alice[aliceiter];
                alicecount++;
            }
            else{
                if (alice[aliceiter] < both[bothiter]){
                    totaltime += alice[aliceiter];
                    aliceiter++;
                }
                else{
                    totaltime += both[bothiter];
                    bothiter++;
                }
            }
        }
        else{
            alicecount++; bobcount++;
            if (bothiter == both.size()){
                totaltime+=alice[aliceiter];
                totaltime+=bob[bobiter];
                aliceiter++; bobiter++;
            }
            else{
                if (aliceiter == alice.size() || bobiter == bob.size()){
                    totaltime += both[bothiter];
                    bothiter++;
                }
                else{
                    if (alice[aliceiter] + bob[bobiter] < both[bothiter]){
                        totaltime+=alice[aliceiter]+bob[bobiter];
                        aliceiter++; bobiter++;
                        // if (n==100){
                        //     for (int i=0; i<5; i++)cout<<alice[i]<<" "; cout<<"\n";
                        //     for (int i=0; i<5; i++)cout<<bob[i]<<" "; cout<<"\n";
                        //     for (int i=0; i<2; i++)cout<<both[i]<<" "; cout<<"\n";

                        // }
                    }
                    else{
                        totaltime+=both[bothiter];
                        bothiter++;
                        // if (n==100)cout<<"!";
                    }
                }
            }
        }
    }
    cout<<totaltime<<"\n";
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