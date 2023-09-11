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
    ll n,m,a;
    cin>>n>>m>>a;
    if (n>a){
        if (m>a){
            if (n%a==0){
                if (m%a==0){
                    cout<<n/a * m/a<<"\n";
                }
                else{
                    cout<<n/a * (m/a + 1) << "\n";
                }
            }
            else{
                if (m%a==0){
                    cout<<(n/a + 1) * m/a <<"\n";
                }
                else{
                    cout<<(n/a + 1) * ( m/a + 1) <<"\n";
                }
            }
        }
        else{
            if (n%a==0){
                cout<<n/a<<"\n";
            }
            else{
                cout<<n/a + 1<<"\n";
            }
        }
    }
    else{
        if (m>a){
            if (m%a==0){
                cout<<m/a<<"\n";
            }
            else{
                cout<<m/a + 1<<"\n";
            }
        }
        else{
            cout<<1<<"\n";
        }
    }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}