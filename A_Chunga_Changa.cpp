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
    long long int x,y,z;
    cin>>x>>y>>z;
    long long int a=x%z;
    long long int b=y%z;
    long long int sum=x/z+y/z;
    long long int transfer=0;
    if((a+b)/z>0){
        sum=sum+(a+b)/z;
        long long int m=max(a,b);
        transfer= abs(m-((a+b)/z)*z);
    }
    cout<<sum<<" "<<transfer<<endl;
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