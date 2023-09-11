#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
vector <string> v_s;
vector < vector <ll> > v_ll;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    // ll n, a=1001,b=0,ind_a=0,ind_b=0;
    // bool lol= false;
    // cin>>n;
    // for (ll i=0;i<n;i++){
    //     ll d;
    //     cin>>d;
    //     if (d>a || b!=0){
    //         if (d<b){
    //             lol = true;
    //             v_s.push_back("YES");
    //             vector <ll> temp;
    //             temp.push_back(ind_a+1);
    //             temp.push_back(ind_b+1);
    //             temp.push_back(i+1);
    //             v_ll.push_back(temp);
    //             // cout<<ind_a+1<<" "<<ind_b+1<<" "<<i+1<<endl;
    //             break;
    //         }
    //         else{
    //         b=d;
    //         ind_b=i;
    //         }
    //     }
    //     else{
    //     a=d;
    //     ind_a=i;
    //     b=0;
    //     }
    // }
    // if (!lol){
    //     v_s.push_back("NO");
    //     vector <ll> temp;
    //     temp.push_back(0);
    //     v_ll.push_back(temp);
    // }
    ll n;
    cin>>n;
    ll ar[n];
    for (int i=0;i<n;i++)cin>>ar[i];
    int count=0,b;
    for (int i=1;i<n-1;i++){
        if (ar[i]>ar[i-1] && ar[i]>ar[i+1]){
            count++;
            cout<<"YES"<<endl<<i<<" "<<i+1<<" "<<i+2<<endl;
            break;
        }
    }
    if (count==0){
        cout<<"NO"<<endl;
    }
}   

int main() 
{
    // lTxtIO;
    ll t;
    // vector <string> v_s;
    cin>>t;
    // t++;
    while(t--){
        solve();
    }
    // for (int i=0;i<v_s.size()-1;i++){
    //     cout<<v_s[i]<<endl;
    //     if (v_s[i]=="YES"){
    //         for (int j=0;j<3;j++){
    //             cout<<v_ll[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    return 0;
}