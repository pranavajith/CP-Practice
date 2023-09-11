    #include <bits/stdc++.h>
    #include <iostream>
    #include <set>
    #include <cmath>
    #include <map>
    #include <sstream>
    using namespace std;
    #define ll long long
    // // #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

    // void solve(){
    //     ll n,x,y;
    //     cin>>n;
    //     map <ll,ll> m1,m2,m3;
    //     for (int i=0;i<n;i++){
    //         ll a;
    //         cin>>a;
    //         m1[a]++;
    //     }
    //     for (int i=0;i<n-1;i++){
    //         ll a;
    //         cin>>a;
    //         m2[a]++;
    //     }
    //     for (int i=0;i<n-2;i++){
    //         ll a;
    //         cin>>a;
    //         m3[a]++;
    //     }
    //     // for (auto d:m){
    //     //     if (d.second==1){
    //     //         cout<<d.first<<" ";
    //     //     }
    //     //     else if (d.second==2){
    //     //         cout<<d.first<<endl;
    //     //     }
    //     // }
    //     for (auto d:m1){
    //         if (m1[d.first]-m2[d.first]==1){
    //             cout<<d.first<<endl;
    //         }
    //         if (m2[d.first]-m3[d.first]==1){
    //             cout<<d.first<<endl;
    //     }
    // }
    // }

    // int main() 
    // {
    //     // lTxtIO;

    //         solve();
        
    //     return 0;
    // }

//     #include <bits/stdc++.h>
// using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll a[n],b[n],c[n];

    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        cin>>b[i];
    }
    for (int i = 0; i < n - 2; i++) {
        cin>>c[i];
    }
    
    sort (a,a+n);
    sort (b,b+n-1);
    sort (c,c+n-2);
    for (int i=0;i<n;i++){
        if (a[i]!=b[i]){
            cout<<a[i]<<endl;
            break;
        }
    }
    for (int i=0;i<n-1;i++){
        if (b[i]!=c[i]){
            cout<<b[i]<<endl;
            break;
        }
    }
}

int main() {
    solve();
    return 0;
}
