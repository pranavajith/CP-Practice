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
    vector<int>is_prime(1001,1);
    int n,k;
    cin>>n>>k;
    is_prime[0]=is_prime[1]=0;
    for(int i=2; i<=n; ++i)
    {
        if(is_prime[i])
        {
            for(int j=2*i; j<=n; j+=i)
            {
                is_prime[j]=0;
            }
        }
    }
    vector<int>v;
    for(int i=1; i<=n; i++)
    {
        if(is_prime[i])
            v.push_back(i);
    }
    int ct=0;
    for(int i=0; i<v.size(); ++i)
    {
        for(int j=0; j<i; ++j)
        {
            if(v[j]+v[j-1]==v[i]-1)
            {
                ct++;
                break;
            }
        }
        if(ct>=k)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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