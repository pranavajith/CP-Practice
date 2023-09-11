#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    int c = 0;
    for (auto d: s){
        if (d=='H' | d=='Q' | d=='9'){
            cout<<"YES"<<endl;
            c++;
            break;
        }
    }
    if (c==0){
        cout<<"NO"<<endl;
    }
}

int main() 
{


        solve();
    
    return 0;
}