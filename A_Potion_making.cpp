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
    float n;
        cin >> n;
 
        float e=1,w=0;
        float v=e+w;
        int c=1;
 
        for(int i=0;i<100;i++){
            float temp = e/v;
            if(temp==(n/100)){
 
                cout<<c<<endl;
                break;
 
            }
 
            if(temp < (n/100)) e++;
            v+=1;
            c++;
           
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