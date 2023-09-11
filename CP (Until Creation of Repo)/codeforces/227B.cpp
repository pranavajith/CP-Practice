// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// #include <set>
// #define ll long long


// int get_index(set <pair <ll,ll> > s, ll n){
//     ll ind = 0;
//     for (auto d : s){
//         if (d.first == n){
//             return ind;
//         }
//         ind++;
//     }
//     return -1;
// }

// void solve(){
//     ll n,m;
//     set < pair <ll,ll> > v1;
//     // vector <ll> v2;
//     // ll c=0;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         pair<ll,ll> p;
//         ll a;
//         cin>>a;
//         p.first = a;
//         p.second = i;
//         v1.insert(p);
//     }

//     // for (auto d:v1){
//     //     cout<<d<<" ";
//     // }
//     // cout<<endl;

//     cin>>m;
//     // for (int i=0;i<m;i++){
//     //     ll a;
//     //     cin>>a;
//     //     v2.push_back(a);
//     // }
//     ll count1=0;
//     ll count2=0;
//     cout<<endl<<endl;
//     for (int i=0;i<m;i++){
//         ll b;
//         cin>>b;
//         ll ind = get_index(v1,b);
//         auto it = v1.begin();
//         for (ll i=0;i<ind;i++){
//             it++;
//         }
//         // cout<<it<<endl;
//         count1+=*(it).second+1;
//     }

//     count2 = m*(v1.size()+1) - count1;
//     cout<<count1<<" "<<count2<<endl;

//     // FIRST COMMENT


//     // ll count1=0;
//     // // ll lol = 0;
//     // ll count2=0;
//     // for (auto d:v2){
//     //     ll it = find(v1.begin(),v1.end(),d) - v1.begin();
//     //     count1+=it+1;
//     //     // lol+=it;
//     // }
//     // count2 = v2.size()*(v1.size()+1) - count1;
//     // cout<<count1<<" "<<count2<<endl;


//     // SECOND COMMENT 


//     // ll count1=0;
//     // ll count2=0;

//     // sort(v1.begin(),v1.end());
//     // for (int i=0;i<m;i++){
//     //     ll d = v2[i];
//     //     if (n%2==0 or i!=n/2){
//     //     if (v1[n/2+1]>=d){
//     //         count1+=i+1;
//     //         count2+=n-i;
//     //     }
//     //     else if (v1[n/2+1]<=d){
//     //         count2+=i+1;
//     //         count1+=n-i;
//     //     }
//     //     }
//     // }
//     // cout<<count1<<" "<<count2<<endl;
// }

// int main() 
// {

//         solve();
    
//     return 0;
// }

#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
#define ll long long

void solve(){
    ll m;
    int N = int(1e5 + 3);
    cin>>m;
    int pos[N];
    for (int i=0;i<m;i++){
        ll a;
        cin>>a;
        pos[a]=i+1;
    }
    ll k;
    cin>>k;
    ll count1=0;
    ll count2=0;
    for (int i=0;i<k;i++){
        ll b;
        cin>>b;
        count1+=pos[b];
        count2+=m+1-pos[b];
    }

    cout<<count1<<" "<<count2<<endl;


}

int main() 
{

        solve();
    
    return 0;
}