#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    ll count_low = 0;
    ll count_high = 0;
    for (int i=0;i<s.size();i++){
        // cout<<(s[i]>=65 & s[i]<=90)<<endl;
        if (s[i]>=65 & s[i]<=90){
            count_high++;
        }
        else{
            count_low++;
        }
    }
    if (count_low>=count_high){
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }
    else{
        transform(s.begin(),s.end(),s.begin(), ::toupper);
    }
    cout<<s<<endl;
}

int main() 
{

        solve();
    
    return 0;
}