#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);


int heh(string num)
{
    string str = num;
    int zero = 0;

    for (int i = 0; i < str.length(); i++)
    {
        // cout<<str[i]<<" lol\n";
        if (i==0 && str[i]=='0'){
            zero++;
            // cout<<"hey!\n";
        }
        else if (str[i] == '0' && str[i-1]=='1')
        {
            zero += 1;
        }
        // cout << zero;
    }

    return zero;
}

void solve(){
    cout<<heh("01");
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}