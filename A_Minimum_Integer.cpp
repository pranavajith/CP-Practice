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
    int l,r,d;
        cin>>l>>r>>d;
        int ans=0;
        int i=1;
        bool tmp=true;
        while (tmp&&d*i<l)
        {
            if(d*i<l){
                ans=d*i;
                tmp=false;
            }
            else 
            i++;
        }
        if(ans)
        cout<<ans<<endl;
        else {
            int rem=(r+1)%d;
            if(rem==0) cout<<r+1<<endl;
            else {
            ans=r+1+d-rem;
            cout<<ans<<endl;
            }
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