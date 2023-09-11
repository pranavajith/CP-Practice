#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){   
    ll n;
    string s;
    cin>>n>>s;
    vector <ll> v1;
    vector <ll> v2;
    for (int i=0;i<n;i++){
        v1.push_back(s[i]-'0');
    }
    for (int i=0;i<n;i++){
        v2.push_back(s[n+i]-'0');
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    // cout<<v2[n-1]<<" "<<v1[n-1]<<endl;

    ll count1=0;
    for (int i=0;i<n;i++){
        if (v2[i]==v1[i]){
            count1++;
            break;
        }
        // cout<<(v2[i]-v1[i])/abs(v2[i]-v1[i])<<" : "<<(v2[0]-v1[0])/abs(v2[0]-v1[0])<<endl;
        else if ((v2[i]-v1[i])/abs(v2[i]-v1[i]) != (v2[0]-v1[0])/abs(v2[0]-v1[0])){
            // cout<<"Hello!";
            count1++;
            break;
        }
    }
    if (count1==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main() 
{

        solve();
    
    return 0;
}