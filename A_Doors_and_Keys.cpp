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
    string str;
        cin>>str;
        int a,b,c,d,e,f;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='R')
            a = i;
            
            else if(str[i]=='G')
            {
                b=i;
            }
            else if(str[i]=='B')
            {
                c=i;
            }
            else if(str[i]=='r')
            {
                d=i;
            }
            else if(str[i]=='g')
            {
                e=i;
            }
            else
            {
                f=i;
            }
        }
        if(a<d || b<e || c<f)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
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