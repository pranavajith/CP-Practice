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
    string s;
    cin>>s;
    string arr1[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string arr2[10] = {"null","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string arr3[10] = {"null","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if (s.size()==1){
        cout<<arr1[s[0]-'0']<<endl;
    }
    else{
        if (s == "10"){
            cout<<"ten"<<endl;
        }
        else if (s[0]=='1'){
            cout<<arr2[s[1]-'0']<<endl;
        }
        else if (s[1]=='0'){
            cout<<arr3[s[0]-'0']<<endl;
        }
        else{
            // cout<<s[0]-'0'<<endl;
            cout<<arr3[s[0]-'0']<<"-"<<arr1[s[1]-'0']<<endl;
        }
    }
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}