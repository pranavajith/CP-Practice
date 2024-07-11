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
    int n,x;    cin>>n>>x;
    int pos =n%6;
    if(x==0){
        if(pos==5 || pos==0)    cout<<"0\n";
        else if(pos==1 || pos==2)   cout<<"1\n";
        else if(pos==3 || pos==4)   cout<<"2\n";
    }
    else if(x==1){
        if(pos==1 || pos==4)    cout<<"0\n";
        else if(pos==3 || pos==0)   cout<<"1\n";
        else if(pos==1 || pos==2 || pos ==5)   cout<<"2\n";
    }
    else {
        if(pos==2 || pos==3)    cout<<"0\n";
        else if(pos==4 || pos==5)   cout<<"1\n";
        else if(pos==0 || pos==1)   cout<<"2\n";
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