// #include <bits/stdc++.h>
// #include <iostream>
// #include <set>
// #include <cmath>
// #include <map>
// using namespace std;
// #define ll long long

// void solve(){
//     ll n,m;
//     cin>>n>>m;
//     map <ll,ll> m1;
//     for (int i=0;i<n;i++){
//         ll a;
//         cin>>a;
//         m1[a]=(i+1);
//     }
//     ll big[m];
//     for (int i=0;i<m;i++){
//         ll a;
//         cin>>a;
//         ll count1=0;
//         for (auto it = m1.begin();it!=m1.end();it++){
//             if (it->second>=a){
//                 count1++;
//             }
//         }
//         big[i]=count1;
//     }
//     for (auto d:big){
//         cout<<d<<endl;
//     }

// }

// int main() 
// {

//         solve();
    
//     return 0;
// }

#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> v1(n), v2(n),v3(n,0);
    for (int i=0;i<n;i++){
        cin>>v1[i];
    }
    for (int i=n-1;i>=0;i--){
        if (count(v2.begin(),v2.end(),v1[i])==0){
            v2[i]=(v1[i]);
            v3[i]++;
        }
    }
}

int main() 
{

        solve();
    
    return 0;
}