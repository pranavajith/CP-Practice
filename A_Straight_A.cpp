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
    {
    char nuc[4]={'A','C','G','T'};
    string s;
    int n;
    cin>>n>>s;
    int k=n/4,j=0;
    int a=count(s.begin(),s.end(),'A');
    int c=count(s.begin(),s.end(),'C');
    int g=count(s.begin(),s.end(),'G');
    int t=count(s.begin(),s.end(),'T');
    if(a==k&&j==0) j++;
    if(c==k&&j==1) j++;
    if(g==k&&j==2) j++;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?')
        {
            s[i]=nuc[j];
            if(s[i]=='A') a++;
            else if(s[i]=='C') c++;
            else if(s[i]=='G') g++;
            else if(s[i]=='T') t++;
        }
        if(a==k&&j==0) j++;
        if(c==k&&j==1) j++;
        if(g==k&&j==2) j++;
    }
    if(a==c&&c==g&&g==t) cout<<s<<endl;
    else cout<<"==="<<endl;
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