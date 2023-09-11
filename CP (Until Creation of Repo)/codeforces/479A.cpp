#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll a,b,c, sol1, sol2;
    cin>>a>>b>>c;
    // if (a>=b and a>=c){
    //     sol1 = a*(b+c);
    // }
    // else if (b>=a and b>=c){
    //     if (a>=c){
            
    //     }
    //     sol1 = b*(a+c);
    // }
    // else{
    //     sol1 = c*(a+b);
    // }
    // cout<<max(sol1,a*b*c)<<endl;
    
    if (a==1 & b==1 & c==1){
        cout<<3<<endl;
    }
    else if (a==1 & b==1){
        cout<<2*c<<endl;
    }
    else if (b==1 & c==1){
        cout<<2*a<<endl;
    }
    else if (a==1 & c==1){
        cout<<b+2<<endl;
    }
    else if (a==1){
        cout<<(a+b)*c<<endl;
    }
    else if (b==1){
        if (a>=c){
            cout<<a*(b+c)<<endl;
        }
        else{
            cout<<(a+b)*c<<endl;
        }
    }
    else if (c==1){
        cout<<a*(b+c)<<endl;
    }
    else{
        cout<<a*b*c<<endl;
    }

}

int main() 
{

        solve();
    
    return 0;
}