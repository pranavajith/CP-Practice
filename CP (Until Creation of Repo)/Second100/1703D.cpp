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
    ll n;
    cin>>n;
    string S[n];
    set <string> st;
    for (int i=0;i<n;i++){
        cin>>S[i];
        st.insert(S[i]);
    }
    for (int i=0;i<n;i++){
        bool ok = false;
        string s1,s2;
        for (int j=0;j<S[i].size();j++){
            s2="";
            s1+=S[i][j];
            if (st.count(s1)){
                for (int k=j+1;k<S[i].size();k++){
                    s2+=S[i][k];}
                    if (st.count(s2)){
                        ok=true;
                    }
                
            }
        }
        if (ok){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    cout<<endl;
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}