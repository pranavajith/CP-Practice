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
    ll r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    // i j
    // k l
    for (int i=1;i<10;i++){
        for (int j=1;j<10;j++){
            for (int k=1;k<10;k++){
                for (int l=1;l<10;l++){
                    if (i+j==r1 && k+l==r2 && i+k==c1 && j+l==c2 && i+l==d1 && k+j==d2 && i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                        cout<<i<<" "<<j<<endl;
                        cout<<k<<" "<<l<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<-1<<endl;
}

int main() 
{

        solve();
    
    return 0;
}