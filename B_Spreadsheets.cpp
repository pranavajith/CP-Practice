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
    ll n = s.size();
    bool check = false, check2 = false;
    for (int i=0; i<s.size(); i++){
        if (s[i]>='0' && s[i]<='9'){
            if (check == false) check = true;
        }
        if (check == true && s[i]=='C'){
            check2=true;
            break;
        }
    }
    if (check2){
        // R23C55 -> BC23
        string sol, row1, col1, firsthalf;
        int i;
        for (i=1; i<n; i++){
            if (s[i]!='C') row1.push_back(s[i]);
            else break;
        }
        col1 = s.substr(i+1, n-i-1);
        ll row = stoll(row1), col = stoll(col1);
        ll a = 26;
        while (col>0){
            // cout<<col%a<<" !!\n";
            // if (col%a == 0){
            //     firsthalf.push_back('Z');
            //     col/=26;
            // }
            // else firsthalf.push_back(col%a + 'A' - 1);
            col--;
            firsthalf.push_back(col%a + 'A');
            col/=26;
            // cout<<col<<" !\n";
            // a*=26;
        }
        reverse(firsthalf.begin(), firsthalf.end());
        sol = firsthalf + row1;
        cout<<sol<<"\n";
    }
    else{
        // BC23 -> R23C55
        string sol, row1, col1;
        ll i;
        for (i=0; i<n; i++){
            if (s[i]>='0' && s[i]<='9')break;
            col1.push_back(s[i]);
        }
        row1 = s.substr(i,n-i);
        // cout<<col1;
        ll n1 = col1.size();
        ll a = pow(26, n1-1);
        ll col = 0;
        reverse(col1.begin(), col1.end());
        while (a>1){
            col += ((col1.back() - 'A' + 1) * a);
            col1.pop_back();
            a/=26;
        }
        col+=col1[0]-'A'+1;
        string col2 = to_string(col);
        cout<<'R'<<row1<<'C'<<col2<<"\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}