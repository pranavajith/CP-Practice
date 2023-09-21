#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
   ll l = 1, r = 1000000;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        cout<<mid<<"\n"<<flush;
        // cout<<flush;
        // printf("%d\n", mid);
        // fflush(stdout);
        string s;
        cin>>s;
        if (s=="<")
            r = mid - 1;
        else
            l = mid;



        // string s;
        // cin>>s;
        // if (s[0]=='>')r=mid-1;
        // else l=mid;



        // char response[3];
        // scanf("%s", response);
        // // if (strcmp(response, "<") == 0)
        // if (response[0]=='>')r = mid - 1;
        // else l = mid;
    }

    cout<<"! "<<l<<"\n"<<flush;
    // fflush(stdout);
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