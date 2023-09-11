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

string lol1 (string s1, ll i){
    if (s1[i+2]<s1[i]){
        char temp = s1[i];
        s1[i]=s1[i+2];
        s1[i+2]=temp;
        i=-1;
        // cout<<s[i]<<" ";
        // cout<<"hey! "<<s1<<" ";
        // cout<<s1<<"\n";
    }
    return s1;
}

string lol2 (string s1, ll i, ll k, ll n){
    if (s1[i+k-1]<s1[i]){
        string s2 = s1.substr(i,k);
        reverse(s2.begin(),s2.end());
        s1 = s1.substr(0,i) + s2 + s1.substr(i+k, n-(i+k));
        i=-1;
        // cout<<"hey2! i: "<<i<<" "<<s1<<" ";
        // cout<<s1<<"\n";
    }
    return s1;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string s1,s9;
    while (true){
        s1=s;
        for (int i=0;i<n-2;i++){
            // cout<<i<<" ";
            if (s1[i+2]<s1[i]){
                char temp = s1[i];
                s1[i]=s1[i+2];
                s1[i+2]=temp;
                i=-1;
                // cout<<s[i]<<" ";
                // cout<<"hey! "<<s1<<" ";
                // cout<<s1<<"\n";
            }
        }
        // cout<<"ok \n";
        for (int i=0;i<n-k+1;i++){
            if (s1[i+k-1]<s1[i]){
                string s2 = s1.substr(i,k);
                reverse(s2.begin(),s2.end());
                s1 = s1.substr(0,i) + s2 + s1.substr(i+k, n-(i+k));
                i=-1;
                // cout<<"hey2! i: "<<i<<" "<<s1<<" ";
                // cout<<s1<<"\n";
            }
        }
        // cout<<"back \n";
        // cout<<s1<<"\n";
        // for (int i=0;i<max(n-2, n-k+1);i++){
        //     string s2="", s3 = "";
        //     if (i<n-2)s2 = lol1(s1,i);
        //     if (i<n-k+1)s3 = lol2(s1, i, k, n);
        //     cout<<s2<<" "<<s3<<"\n";
        //     if (s2<s3)s1=s2;
        //     else s1=s3;
        // }
        if (s1==s)break;
        s=s1;
        
        // s1=s;
        // for (int i=0;i<n-k+1;i++){
        //     if (s1[i+k-1]<s1[i]){
        //         string s2 = s1.substr(i,k);
        //         reverse(s2.begin(),s2.end());
        //         s1 = s1.substr(0,i) + s2 + s1.substr(i+k, n-(i+k));
        //         i=-1;
        //         // cout<<"hey2! i: "<<i<<" "<<s1<<" ";
        //         cout<<s1<<"\n";
        //     }
        // }
        
        // cout<<"ok \n";
        // for (int i=0;i<n-2;i++){
        //     // cout<<i<<" ";
        //     if (s1[i+2]<s1[i]){
        //         char temp = s1[i];
        //         s1[i]=s1[i+2];
        //         s1[i+2]=temp;
        //         i=-1;
        //         // cout<<s[i]<<" ";
        //         // cout<<"hey! "<<s1<<" ";
        //         cout<<s1<<"\n";
        //     }
        // }
        // cout<<"back \n";
        // // cout<<s1<<"\n";
        // if (s1==s)break;
        // s=s1;
    }
    cout<<s<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}