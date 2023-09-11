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

void solve(){
    ll k,n,m;
    cin>>k>>n>>m;
    vector <ll> vn,vm;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        vn.push_back(a);
    }
    for (int i=0;i<m;i++){
        ll a;
        cin>>a;
        vm.push_back(a);
    }
    vector <ll> sol;
    bool flag = true;
    int pos1=0,pos2=0;
    while (pos1!=n || pos2!=m){
        if (pos1!=n && vn[pos1]==0){
            sol.push_back(0);
            k++;
            pos1++;
        }
        else if (pos2!=m && vm[pos2]==0){
            sol.push_back(0);
            k++;
            pos2++;
        }
        else if (pos1!=n && vn[pos1]<=k){
            sol.push_back(vn[pos1]);
            pos1++;
        }
        else if (pos2!=m && vm[pos2]<=k){
            sol.push_back(vm[pos2]);
            pos2++;
        }
        else{
            cout<<-1<<"\n";
            flag = false;
            break;
        }
    }
    
    // auto iter_n = vn.begin();
    // auto iter_m = vm.begin();
    // while (iter_n != vn.end() || iter_m!=vm.end()){

        // if (iter_n!=vn.end()){
        //     if (*iter_n == 0){
        //         sol.push_back(0);
        //         k++;
        //         iter_n++;
        //     }
        //     else{
        //         if (*iter_n>k){
        //             if (*iter_m>k){
        //             cout<<-1<<"\n";
        //             flag = false;
        //             break;
        //             }
        //         }
        //         else{
        //             sol.push_back(*iter_n);
        //             iter_n++;
        //         }
        //     }
        // }
        // if (iter_m!=vm.end()){
        //     if (*iter_m == 0){
        //         sol.push_back(0);
        //         k++;
        //         iter_m++;
        //     }
        //     else{
        //         if (*iter_m>k && flag){
        //             cout<<-1<<"\n";
        //             flag = false;
        //             // break;
        //         }
        //         else{
        //             sol.push_back(*iter_m);
        //             iter_m++;
        //         }
        //     }
        // }
    // }
    if (flag){
        // cout<<"YES\n";
        for (int i=0; i<sol.size();i++){
            cout<<sol[i]<<" ";
        }
        cout<<"\n";
    }
}
    // bool flag = true, check = false;
    // if (vn[vn.size()-1]==0 && vm[0]==0){
    //     k++;
    //     vn.pop_back();
    //     n--;
    //     check = true;
    // }
    // for (int i=0;i<n;i++){
    //     if (vn[i]==0){
    //         k++;
    //     }
    //     else if (vn[i]>k && flag){
    //             flag = false;
    //             cout<<-1<<"\n";
    //     }
    // }
    // for (int i=0;i<m;i++){
    //     if (vm[i]==0){
    //         k++;
    //     }
    //     else if (vm[i]>k && flag){
    //             flag = false;
    //             cout<<-1<<"\n";
    //     }
    // }
    // if (flag){
    //     if (check)cout<<0<<" ";
    //     for (int i=0;i<n;i++){
    //         cout<<vn[i]<<" ";
    //     }
    //     for (int i=0;i<m;i++){
    //         cout<<vm[i]<<" ";
    //     }
    //     cout<<"\n";
    // }


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