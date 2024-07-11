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
    ll n;
     cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        bool flag=false;
        for(int i=n-1;i>0;i--)
        {
            if(ar[i]<ar[i-1])
            {
                int g = ar[i-1]/10;
                if(ar[i]>=ar[i-1]%10 && ar[i-1]%10>=g)
                {
                    ar[i-1]/=10;
                }
                else
                {
                    flag=true;
                }
            }
        }
        if(flag)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
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