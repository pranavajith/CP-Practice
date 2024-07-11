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
    double n;
        cin>>n;
        if(n<2)
        {
            cout<<(0);
        }
        else
        {
            int mini=999999;
            for(double i=1; i<=sqrt(n)+1 ;i++)
            {
                double x=ceil(n/i)+i-1;
                if(x<mini)
                    mini=x;
            }
            cout<<(mini-1);
        }
        cout<<"\n";
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