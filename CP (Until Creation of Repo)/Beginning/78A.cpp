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
    ll s_ar[3]={0,0,0};
    for (int i=0;i<3;i++){
        string s;
        getline(cin,s);
        for (auto d:s){
            if (d!=' '){
                if (d=='a' || d=='e' || d=='i' || d=='o' || d=='u'){
                    s_ar[i]++;
                }
            }
        }
    }
    if (s_ar[0]==5 && s_ar[1]==7 && s_ar[2]==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}