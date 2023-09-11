#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string t1,t2;
    cin>>t1>>t2;
    ll a=0,b=0,c=0,e=0,temp=2;
    ll count1=0;
    for (auto d:t1){
        if (d==':'){
            count1++;
            continue;
        }
        if (count1==0){
            // cout<<(d-'0')<<endl;
            a=a*10+(d-'0');
        }
        else if (count1==1){
            // cout<<(d-'0')<<endl;
            b=b*10+(d-'0');
        }
    }
    count1=0;
    for (auto d:t2){
        if (d==':'){
            count1++;
            continue;
        }
        if (count1==0){
            // cout<<(d-'0')<<endl;
            c=c*10+(d-'0');
        }
        else if (count1==1){
            // cout<<(d-'0')<<endl;
            e=e*10+(d-'0');
        }
    }
    // cout<<a<<" "<<b<<" "<<c<<" "<<e<<endl;
    ll first_half=23 , second_half = 0;
    if (b>=e){
        second_half = b-e;
        if (a>=c){
            first_half = a-c;
        }
        else{
            first_half = 24+(a-c);
        }
    }
    else{
        second_half = 60+b-e;
        // cout<<a<<endl;
        if (a==0){
            first_half = 24 -1 - c;
        }
        else if (a-1>=c){
            first_half = a-1-c;
        }
        else{
            first_half = 23;
            // cout<<a<<endl;
            first_half += int(a)-int(c);
            // cout<<int(a)<<int(c)<<endl;
        }
    }
    // cout<<first_half<<endl<<endl;
    ll a1,b1;
    // cout<<floor(log10(first_half-1)+1)<<endl;
    if (floor(log10(first_half)+1)!=1 && floor(log10(first_half)+1)!=2){
        // first_half=0;
        // cout<<"hello!"<<endl;
        a1=1;
    }
    else{
        a1=floor(log10(first_half)+1);
        // cout<<floor(log10(first_half-1)+1)<<endl;
    }
    if (floor(log10(second_half)+1)!=1 && floor(log10(second_half)+1)!=2){
        b1=1;
    }
    else{
        b1=floor(log10(second_half)+1);
    }
    // cout<<a1<<" "<<b1<<endl;
    if (a1==1){
        cout<<"0"<<first_half<<":";
    }
    else{
        cout<<first_half<<":";
    }
    if (b1==1){
        cout<<"0"<<second_half<<endl;
    }
    else{
        cout<<second_half<<endl;
    }
}
    

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}