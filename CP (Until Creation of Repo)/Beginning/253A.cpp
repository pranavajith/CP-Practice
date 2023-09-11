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

//     for (int i=0;i<(n+m);i++){
//         if (i<min(n,m)){
//             cout<<"BG";
//         }
//         else if (i==min(n,m)){
//             i=2*min(n,m)-1;
//         }
//         else{
//             cout<<"B";
//         }
//     }
//     cout<<endl;
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
    for (int i=0;i<min(n,m);i++){
        cout<<"BG";
    }
    for (int i=0;i<abs(n-m);i++){
        cout<<"B";
    }
    cout<<"\n";
}
 
int main() 
{
 
        solve();
    
    return 0;
}