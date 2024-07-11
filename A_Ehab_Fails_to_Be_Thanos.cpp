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
int n;
   cin>>n;
   vector<long long> v(2*n);
   for(int i=0;i<2*n;i++)
   {
       cin>>v[i];
   }
   sort(v.begin(),v.end());
   long long sum_1=0,sum_2=0;
   for(int i=0;i<n;i++)
   {
       sum_1+=v[i];
   }
   reverse(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {       
       sum_2+=v[i];
   }
   if(sum_1==sum_2)
   {
       cout<<-1<<endl;
   }
   else
   {
       for(auto i:v)
       {
           cout<< i<<' ';
       }
       cout<<endl;
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