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
    long long int a=0, b=0, c=0, n, k, l;
        vector<long long int> v;
        cin >> n;
        string s;
       cin>>s;
      for(int i=0;i<n;i++)
      {
        for(int j=n-1;j>i;j--)
        { a=0;b=0;
            for(int k=i;k<=j;k++)
            {
                if(s[k]=='a')
                   a++;
                else
                b++;
            }
            
            if(a==b)
           { k=i;l=j;c=1;break;}
        }
         if(a==b)
            break;
      }
      if(c==0)
      cout<<-1<<" "<<-1<<endl;
      else
      cout<<k+1<<" "<<l+1<<endl;
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