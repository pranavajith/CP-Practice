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
    int i,cnt=0;
    string s;
    cin>>s;
    int siz=s.length();
    if(siz<7)
        cout<<"no\n";
    else
    {
        bool flag=false;
        for(i=siz-1; i>=0; i--)
        {
            if(s[i]=='0')
                cnt++;
            else if(s[i]=='1' && cnt>=6)
                flag=true;
        }
        if(flag==true)
            cout<<"yes\n";
        else
            cout<<"no\n";
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