#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s;
    cin>>s;
    if (s.size()==1){   
        if (s=="8" || s=="0")cout<<"YES\n"<<s<<"\n";
        else cout<<"NO\n";
    }
    else if (count(s.begin(), s.end(), '0'))cout<<"YES\n"<<0<<"\n";
    else if (count(s.begin(), s.end(), '8'))cout<<"YES\n"<<8<<"\n";
    else if (s.size()==2 && (s=="16" || s=="24" || s=="32" || s=="40" || s=="48" || s=="56" || s=="64" || s=="72" || s=="80" || s=="88" || s=="96"))cout<<"YES\n"<<s<<"\n";
    else{
    for (int i=0;i<s.size()-2;i++){
        for (int j=i+1; j<s.size()-1;j++){
            string s3;
            s3+=s[i]; s3+=s[j];
            if (stoi(s3)%8==0){
                cout<<"YES\n"<<s3<<"\n";
                return;
            }
            for (int k=j+1; k<s.size();k++){
                string s2;
                s2.push_back(s[i]);
                s2.push_back(s[j]);
                s2.push_back(s[k]);
                int l = stoi(s2);
                if (l%8==0){
                    cout<<"YES\n"<<l<<"\n";return;
                }
                string s4; s4.push_back(s[i]); s4.push_back(s[k]);
                if (stoi(s4)%8==0){
                    cout<<"YES\n"<<s4;return;
                }
                
            }
        }
    }
    cout<<"NO\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}