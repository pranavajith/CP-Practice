#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool check(int x){
    cout<<"X >= "<<x<<"\n";
    string s;
    cin>>s;
    if (s=="Yes"){
        return true;
    }
    return false;
}

void solve(){
    cout<<"Think of a number between 1-100\n\n";
    int left = 0, right = 100;
    while (left<=right){
        int mid = (left+right)/2;
        if (check(mid))left=mid+1;
        else right = mid-1;
    }
    cout<<"The number you are thinking of is: "<<left-1<<"\n";
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}