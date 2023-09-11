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

// void solve(){
//     ll n;
//     cin>>n;
//     vector <ll> a;
//     // vector <ll> b(n);
//     for (int i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         a.push_back(x);
//     }
//     vector <ll> temp;
//     bool flag = true;
//     for (int i=0;i<n;i++){
//         ll w;
//         cin>>w;
//         if (flag){
//         if (i==0 && a[0]!=w){
//             cout<<"NO\n";
//             flag = false;
//             // break;   
//         }
//         else if (i==0 && a[0]==w){
//             temp.push_back(w);
//         }
//         else if (flag){
//             if (w!=a[i]){
//                 if (w>a[i] && count(temp.begin(),temp.end(),1)==0 && flag){
//                     // cout<<w<<" "<<a[i]<<"\n";
//                     cout<<"NO"<<"\n";
//                     flag = false;
//                     // break;
//                 }
//                 else if ((w<a[i] && count(temp.begin(),temp.end(),-1)==0 && flag)){
//                     // cout<<w<<" "<<a[i]<<"\n";
//                     cout<<"NO"<<"\n";
//                     flag = false;
//                     // break;
//                 }
//                 else {
//                     temp.push_back(a[i]);
//                 }
//             }
        
//         }
//     }
    
// }
// if (flag)cout<<"YES\n";
// }

// int main() 
// {
//     // lTxtIO;
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int neg = 0, pos = 0, diff = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < b[i] && pos == 0) {
            cout << "NO\n";
            return;
        } else if (a[i] > b[i] && neg == 0) {
            cout << "NO\n";
            return;
        }

        if (a[i] == -1) {
            neg++;
        } else if (a[i] == 1) {
            pos++;
        }

        diff = b[i] - a[i];
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
