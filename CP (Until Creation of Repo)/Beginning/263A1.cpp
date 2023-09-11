#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    int n,m;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            int a;
            cin>>a;
            if (a==1){
                n=i+1;
                m=j+1;
            }

        }
    }
    cout<<abs(n-3)+abs(m-3)<<endl;
}

int main() 
{
    // lTxtIO;
    solve();
    
    return 0;
}