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
        
        string b1,b2;
        cin>>b1>>b2;
        
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            if(b1[i]=='0'){
                if(b2[i]=='1'){
                    ans+=2;
                    
                }
                else if(i>0 &&( b2[i-1]=='1'&& b1[i-1]=='1')){
                    ans+=2;
                    
                }
                else if(i<n-1 &&(b2[i+1]=='1'&& b1[i+1]=='1')){
                    ans+=2;
                   b1[i+1]='2'; 
                   
                }
                
                else{
                    ans++;
                    
                }
 
            }
            else {
                if(b2[i]=='0'){
                    ans+=2;
                    
                }
                
            }
            
        }
        cout<<ans<<endl;
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