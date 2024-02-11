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
    ll n,a,b;
    cin>>n>>a>>b;
    n*=6;
    if (a*b >= n){
        cout<<a*b<<"\n"<<a<<" "<<b<<"\n";
    }
    else if (n%a == 0){
        cout<<n<<"\n"<<a<<" "<<n/a<<"\n";
    }
    else if (n%b == 0){
        cout<<n<<"\n"<<n/b<<" "<<b<<"\n";
    }
    else {
        ll temp = (n/min(a,b)+1)*min(a,b);
        // cout<<temp<<"\n"<<min(a,b)<<" "<<temp/min(a,b)<<"\n";
        ll mina = min(a,b), maxa = max(a,b);
        ll temp1 = mina;
        ll n1 = n;
        while (true){
            // cout<<n1<<" ";
            ll temp1 = mina;
        while (temp1*temp1 <= n1){
            if (n1%temp1 == 0) {
                if (n1/temp1 >= maxa){ 
                    // cout<<n<<"\n"<<temp1<<" "<<n/temp1;
                    if (mina == a) cout<<n1<<"\n"<<temp1<<" "<<n1/temp1;
                    else  cout<<n1<<"\n"<<n1/temp1<<" "<<temp1;
                    return;
                }
                else break;
            }
            temp1++;
        }
        n1++;
        }
        // ll temp3 = (n/max(a,b)+1)*max(a,b);
        // if (temp <= temp3){
        // if (mina == a) cout<<temp<<"\n"<<min(a,b)<<" "<<temp/min(a,b)<<"\n";
        // else  cout<<temp<<"\n"<<temp/min(a,b)<<" "<<min(a,b)<<"\n";
        // }
        // else {

        // }
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