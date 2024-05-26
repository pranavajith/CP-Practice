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
// ll n,m;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

// bool check(ll x1, ll y1, ll x2, ll y2){
//     if (x1 > 0 && x1 <= n && y1 > 0 && y1 <= m && x2 > 0 && x2 <= n && y2 > 0 && y2 <= m) return true;
//     else return false;
// }

void solve(){
    ll n,m;
    cin>>n>>m;
    // cout<<"? 1 1\n"; cout.flush(); 
    // ll a; cin>>a;
    // cout<<"? "<<n<<" "<<m<<"\n"; cout.flush(); 
    // ll b; cin>>b;
    // cout<<"? "<<n<<" "<<1<<"\n"; cout.flush(); 
    // ll c; cin>>c;
    // cout<<"? "<<1<<" "<<m<<"\n"; cout.flush(); 
    // ll d; cin>>d;
    // // if ((c-n+1+a+2) % 2 == 0 && (n-b+d+1)%2 == 0 && check(a+2 - (c-n+1+a+2)/2, (c-n+1+a+2)/2, (n-b+d+1)/2, n+m-b-(n-b+d+1)/2)) cout<<"! "<<a+2 - (c-n+1+a+2)/2<<" "<<(c-n+1+a+2)/2<<"\n";
    // // else cout<<"! "<<(a+2+d+1-m)/2<<" "<<a+2-(a+2+d+1-m)/2<<"\n"; 
    // cout<<"! "<<(a+2+d+1-m)/2<<" "<<a+2-(a+2+d+1-m)/2<<"\n"<<n+m-b-(m-b+c+1)/2<<" "<<(m-b+c+1)/2<<"\n"; 
    // // if ((a+2+d+1-m) % 2 == 0 && (m-b+c+1) % 2 == 0) cout<<"yay!";    
    // cout.flush();
    cout<<"? 1 1\n"; cout.flush(); 
    ll a; cin>>a;
    // cout<<"? "<<n<<" "<<m<<"\n"; cout.flush(); 
    // ll b; cin>>b;
    cout<<"? "<<n<<" "<<1<<"\n"; cout.flush(); 
    ll b; cin>>b;
    ll y1 = (a+2+b+1-n)/2; ll x1 = a + 2 - y1; 
    if ((a+2+b+1-n) % 2 == 0 && y1 > 0 && y1 <= m && x1 > 0 && x1 <= n) {
        cout<<"? "<<x1<<" "<<y1<<"\n"; cout.flush(); 
        ll c; cin>>c;
        if (c==0) {
            cout<<"! "<<x1<<" "<<y1<<"\n"; cout.flush(); return;
        }
        cout<<"? "<<1<<" "<<m<<"\n"; cout.flush(); 
        ll d; cin>>d;
        cout<<"! "<<(a+2+d+1-m)/2<<" "<<a+2-(a+2+d+1-m)/2<<"\n"; cout.flush(); return;
    }
    cout<<"? "<<1<<" "<<m<<"\n"; cout.flush(); 
    ll d; cin>>d;
    cout<<"! "<<(a+2+d+1-m)/2<<" "<<a+2-(a+2+d+1-m)/2<<"\n"; cout.flush(); return;

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