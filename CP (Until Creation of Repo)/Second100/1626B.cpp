#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string a;
    cin>>a;
    bool flag = true;
    for (int i=a.size()-2;i>=0;i--){
        int x = a[i]-'0'+a[i+1]-'0';
        if (x>=10){
            int y=x/10;
            x%=10;
            string temp = a.substr(0,i);
            temp+=(y+'0');
            temp+=(x+'0');
            temp+=a.substr(i+2);
            cout<<temp<<"\n";
            return;
        }
    }
    int x = a[0]-'0'+a[1]-'0';
    string ans(1,x+'0');
    if (a.size()>2){
        string temp = a.substr(2);
        ans+=temp;
    }
    cout<<ans<<"\n";
}
    //ok
int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}