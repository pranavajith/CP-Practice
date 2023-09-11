#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

int dec_to_ter(ll a){
    ll s=0;
    while (a){
        s=s*10 + (a%3);
        a/=3;
    }
    ll s_rev=0;
    ll lol = floor(log10(s-1)+1);
    for (int i=0;i<lol;i++){
        s_rev = s%10 + 10*s_rev;
        s/=10;
    }
    return s_rev;
}

int ter_to_dec(ll a){
    ll s=0;
    ll lol = floor(log10(a-1)+1);
    for(int i=0;i<lol;i++){
        s+=pow(3,i)*(a%10);
        a/=10;
    }
    return s;
}

int subtr_ter(ll c, ll a){
    // string sc;
    ll c_copy=c, a_copy=a, s=0;
    ll max_len = max(floor(log10(c-1)+1), floor(log10(a-1)+1));
    for (int i=0;i<max_len;i++){
        int a1,c1;
        if (i>=c_copy){
            c1=0;
        }
        else{
            c1=c%10;
            c/=10;
        }
        if (i>=a_copy){
            a1=0;
        }
        else{
            a1=a%10;
            a/=10;
        }
        if (a1==0){
            s=s*10 + c1;
        }
        else if (c1==a1){
            s*=10;
        } 
        else if ((c1==2 && a1==1) || ((c1==1 && a1==0))){
            s=s*10 + 1;
        }
        else if ((c1==1 && a1==2) || ((c1==0 && a1==1))){
            s=s*10 + 2;
        }


        // string x,y;
        // if (i>floor(log10(c-1)+1)-1){
        //     x="0";
        // }
        // else{
        //     if (c%10==0){
        //         sc.append("0");
        //         c/=10;
        //     }
        //     else if (c%10==1){
        //         sc.append("1");
        //         c/=10;
        //     }
        //     else if (c%10==2){
        //         sc.append("2");
        //         c/=10;
        //     }
        // }
        // if (i>floor(log10(a-1)+1)-1){
        //     y="0";
        // }
        // else{
        //     if (a%10==0){
        //         sa.append("0");
        //         c/=10;
        //     }
        //     else if (a%10==1){
        //         sa.append("1");
        //         a/=10;
        //     }
        //     else if (a%10==2){
        //         sa.append("2");
        //         a/=10;
        //     }
        // }
    }
    ll s_rev=0;
    ll lol = floor(log10(s-1)+1);
    for (int i=0;i<lol;i++){
        s_rev = s%10 + 10*s_rev;
        s/=10;
    }
    return s_rev;
    // return 0;
}

void solve(){
    ll a,c;
    cin>>a>>c;
    ll a_ter = dec_to_ter(a);
    cout<<a_ter<<endl;
    ll c_ter = dec_to_ter(c);
    cout<<c_ter<<endl;
    ll b_ter = subtr_ter(c_ter,a_ter);
    cout<<b_ter<<endl;
    ll b = ter_to_dec(b_ter);
    cout<<b<<endl;
}

int main() 
{

        solve();
    
    return 0;
}